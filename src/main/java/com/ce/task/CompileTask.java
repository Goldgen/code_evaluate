package com.ce.task;

import com.alibaba.fastjson.JSON;
import com.ce.config.FileUtil;
import com.ce.model.Assignment;
import com.ce.model.StudentQuestion;
import com.ce.model.TestCase;
import com.ce.model.Violation;
import com.ce.service.AssignmentService;
import com.ce.service.TestCaseService;
import com.ce.util.CompileUtil;
import com.ce.vo.OclintInfoVo;
import com.ce.vo.QuestionListVo;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class CompileTask implements Runnable {

    private static AssignmentService assignmentService = new AssignmentService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static final String basePath = "./src/main/webapp/upload/";

    @Override
    public void run() {
        List<Assignment> assignments = assignmentService.findUnEvaluate();
        for (Assignment assignment : assignments) {
            //TODO 考虑上传文件后即解压，并且检查改作业文件是否完整，即每个学号是否都有文件夹
            //解压
            int assignmentId = assignment.getAssignmentId();
            String assignmentIdStr = String.valueOf(assignmentId);
            System.out.println("正在解压作业" + assignmentId);
            CompileUtil.unZipAll(assignmentIdStr);
            assignment.setStatus(2);
            assignment.update();

            System.out.println("正在生成输入文件和答案文件" + assignmentId);
            List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
            for (QuestionListVo vo : questionVoList) {
                for (TestCase testCase : vo.testCaseList) {
                    //创建测试用例文件
                    String inputFilePath = basePath + assignmentId + "/" + vo.questionId + "_input_" + testCase.getTestCaseId() + ".txt";
                    FileUtil.addTxtFile(inputFilePath, testCase.getTestCaseContent());
                    //创建答案文件
//                    String answerFilePath = basePath + assignmentId + "/" + vo.questionId + "answer" + testCase.getTestCaseId() + ".txt";
//                    FileUtil.addTxtFile(answerFilePath, testCase.getAnswer());
                }
            }

            //编译
            //获取一个作业下面所有提交作业的学生学号
            List<String> stuNumList = FileUtil.getSubDirectoryName(assignmentIdStr);
            for (String stuNum : stuNumList) {
                List<String> questionIdList = FileUtil.getCFilesName(assignmentIdStr, stuNum);
                for (String questionId : questionIdList) {
                    System.out.println("正在编译学号" + stuNum + " 第" + questionId + "题文件");
                    if (!CompileUtil.isCompilePass(assignmentIdStr, stuNum, questionId)) {
                        StudentQuestion studentQuestion = new StudentQuestion();
                        studentQuestion.setUserId(stuNum);
                        studentQuestion.setQuestionId(Integer.parseInt(questionId));
                        studentQuestion.setIsCompilePass(false);
                        studentQuestion.save();
                        continue;
                    }
                    List<TestCase> testCaseList = questionVoList.stream().filter(x -> x.questionId == Integer.parseInt(questionId))
                            .findFirst().orElse(new QuestionListVo()).testCaseList;
                    System.out.println("正在执行学号" + stuNum + " 第" + questionId + "题文件");
                    int testCasePassNum = 0;
                    for (TestCase testCase : testCaseList) {
                        CompileUtil.execute(assignmentIdStr, stuNum, questionId, testCase.getTestCaseId().toString());
                        String outputFilePath = basePath + assignmentId + "/" + stuNum + "/" + questionId + "_output_" + testCase.getTestCaseId() + ".txt";
                        if (FileUtil.compareFileWithString(outputFilePath, testCase.getAnswer())) {
                            testCasePassNum++;
                        }
                    }

                    System.out.println("正在分析学号" + stuNum + " 第" + questionId + "题文件");
                    CompileUtil.evaluate(assignmentIdStr, stuNum, questionId);
                    String evaluateFilePath = basePath + assignmentId + "/" + stuNum + "/" + questionId + "_result.json";
                    String json = FileUtil.readFile(evaluateFilePath);
                    OclintInfoVo info = JSON.parseObject(json, OclintInfoVo.class);
                    int evaluationScore = 50;
                    List<Integer> violationIdList = new ArrayList<>();
                    for (Violation violation : info.violation) {
                        switch (violation.getPriority()) {
                            case 1:
                                evaluationScore = evaluationScore - 10;
                                break;
                            case 2:
                                evaluationScore = evaluationScore - 5;
                                break;
                            case 3:
                                evaluationScore = evaluationScore - 2;
                                break;
                            default:
                                break;
                        }
                        violation.save();
                        violationIdList.add(violation.getViolationId());
                    }

                    StudentQuestion studentQuestion = new StudentQuestion();
                    studentQuestion.setUserId(stuNum);
                    studentQuestion.setQuestionId(Integer.parseInt(questionId));
                    studentQuestion.setIsCompilePass(true);
                    studentQuestion.setTestCasePassRate((testCasePassNum / testCaseList.size()) * 100);
                    studentQuestion.setEvaluationScore(evaluationScore < 0 ? 0 : evaluationScore);
                    studentQuestion.setViolationIds(JSON.toJSONString(violationIdList));
                    studentQuestion.save();
                }
            }


            assignment.setStatus(3);
            assignment.update();
        }
    }
}
