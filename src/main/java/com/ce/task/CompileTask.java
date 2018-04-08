package com.ce.task;

import com.alibaba.fastjson.JSON;
import com.ce.config.MyConstants;
import com.ce.model.*;
import com.ce.service.QuestionService;
import com.ce.service.StudentQuestionService;
import com.ce.util.FileUtil;
import com.ce.service.AssignmentService;
import com.ce.service.TestCaseService;
import com.ce.util.CompileUtil;
import com.ce.vo.FileInfo;
import com.ce.vo.OclintInfoVo;
import com.ce.vo.QuestionListVo;
import com.ce.vo.ShellReturnInfo;
import com.jfinal.kit.PathKit;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class CompileTask implements Runnable {

    private static AssignmentService assignmentService = new AssignmentService();
    private static TestCaseService testCaseService = new TestCaseService();
    private static QuestionService questionService = new QuestionService();
    private static StudentQuestionService studentQuestionService = new StudentQuestionService();


    //TODO 路径问题加以整理
    @Override
    public void run() {
        List<Assignment> assignments = assignmentService.findUnEvaluate();
        for (Assignment assignment : assignments) {
            int assignmentId = assignment.getAssignmentId();
            String directoryName = assignment.getDirectoryName();
            assignment.setIsEvaluateFinish(false);
            assignment.setEvaluateTime(new Date());
            assignment.update();
            String assignmentDirectoryPath = MyConstants.uploadPath + directoryName + "/";
            System.out.println("正在生成输入文件" + assignmentId);
            List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
            for (QuestionListVo vo : questionVoList) {
                for (TestCase testCase : vo.testCaseList) {
                    //创建测试用例文件
                    String inputFilePath = assignmentDirectoryPath + vo.questionNo + "_input_" + testCase.getTestCaseId() + ".txt";
                    FileUtil.addTxtFile(inputFilePath, testCase.getTestCaseContent());
                }
            }

            //编译
            //获取一个作业下面所有提交作业的学生学号
            List<String> stuNumList = FileUtil.getSubDirectoryName(assignmentDirectoryPath);
            for (String stuNum : stuNumList) {
                List<FileInfo> fileInfoList = FileUtil.getCOrCppFilesName(assignmentDirectoryPath, stuNum);
                for (FileInfo fileInfo : fileInfoList) {
                    String fileName = fileInfo.fileName;
                    String prefix = fileInfo.prefix;
                    int questionNo = Integer.parseInt(prefix);
                    System.out.println("正在编译学号" + stuNum + "下" + fileName + "文件");
                    String fatherFilePath = assignmentDirectoryPath + stuNum;
                    Question question = questionService.findByAssignmentIdAndQuestionNo(assignmentId, questionNo);
                    if (question == null)
                        continue;

                    int questionId = question.getQuestionId();
                    boolean alreadyExist = studentQuestionService.findById(questionId, stuNum) != null;
                    ShellReturnInfo returnInfo = CompileUtil.isCompilePass(fatherFilePath, fileName);
                    if (!returnInfo.isPass) {
                        StudentQuestion studentQuestion = new StudentQuestion();
                        studentQuestion.setUserId(stuNum);
                        studentQuestion.setQuestionId(questionId);
                        studentQuestion.setIsCompilePass(false);
                        studentQuestion.setCompileErrorInfo(returnInfo.errorInfo);
                        if (alreadyExist) {
                            studentQuestion.update();
                        } else {
                            studentQuestion.save();
                        }
                        continue;
                    }

                    List<TestCase> testCaseList = questionVoList.stream().filter(x -> x.questionId == questionId)
                            .findFirst().orElse(new QuestionListVo()).testCaseList;

                    System.out.println("正在执行学号" + stuNum + " 第" + questionId + "题文件");
                    int testCasePassNum = 0;
                    for (TestCase testCase : testCaseList) {
                        String inputFileName = question.getQuestionNo() + "_input_" + testCase.getTestCaseId() + ".txt";
                        String outputFileName = question.getQuestionNo() + "_output_" + testCase.getTestCaseId() + ".txt";
                        CompileUtil.execute(fatherFilePath, prefix + ".out", inputFileName, outputFileName);
                        String outputFilePath = fatherFilePath + "/" + questionId + "_output_" + testCase.getTestCaseId() + ".txt";
                        if (FileUtil.compareFileWithString(outputFilePath, testCase.getAnswer())) {
                            testCasePassNum++;
                        }
                    }
                    int testCaseScore = (testCasePassNum / testCaseList.size()) * 50;

                    System.out.println("正在分析学号" + stuNum + " 第" + questionId + "题文件");
                    String resultFileName = prefix + "_result.json";
                    CompileUtil.evaluate(fatherFilePath, fileName, resultFileName);
                    String evaluateFilePath = fatherFilePath + "/" + questionId + "_result.json";
                    String json = FileUtil.readFile(evaluateFilePath);
                    OclintInfoVo info = JSON.parseObject(json, OclintInfoVo.class);
                    int evaluationScore = 30;
                    List<Integer> violationIdList = new ArrayList<>();
                    for (Violation violation : info.violation) {
                        switch (violation.getPriority()) {
                            case 1:
                                evaluationScore = evaluationScore - 7;
                                break;
                            case 2:
                                evaluationScore = evaluationScore - 3;
                                break;
                            case 3:
                                evaluationScore = evaluationScore - 1;
                                break;
                            default:
                                break;
                        }
                        violation.save();
                        violationIdList.add(violation.getViolationId());
                    }

                    StudentQuestion studentQuestion = new StudentQuestion();
                    studentQuestion.setUserId(stuNum);
                    studentQuestion.setQuestionId(questionId);
                    studentQuestion.setIsCompilePass(true);
                    studentQuestion.setCompileErrorInfo("");
                    studentQuestion.setTestCaseScore(testCaseScore);
                    studentQuestion.setEvaluationScore(evaluationScore < 0 ? 0 : evaluationScore);
                    studentQuestion.setViolationIds(JSON.toJSONString(violationIdList));
                    if (alreadyExist) {
                        studentQuestion.update();
                    } else {
                        studentQuestion.save();
                    }
                }
            }
            assignment.setIsEvaluateFinish(true);
            assignment.update();
        }
    }
}
