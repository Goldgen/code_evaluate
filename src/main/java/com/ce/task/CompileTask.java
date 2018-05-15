package com.ce.task;

import com.alibaba.fastjson.JSON;
import com.ce.config.MyConstants;
import com.ce.model.first.*;
import com.ce.model.second.Assignment;
import com.ce.service.*;
import com.ce.util.FileUtil;
import com.ce.util.CompileUtil;
import com.ce.vo.*;
import com.jfinal.kit.LogKit;
import com.jfinal.kit.PathKit;
import com.jfinal.plugin.activerecord.Db;

import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class CompileTask implements Runnable {

    private static UploadService uploadService = new UploadService();
    private static TestCaseService testCaseService = new TestCaseService();
    private static QuestionService questionService = new QuestionService();
    private static StudentQuestionService studentQuestionService = new StudentQuestionService();
    private static SimilarityService similarityService = new SimilarityService();

    @Override
    public void run() {
        List<Upload> uploads = uploadService.findUnEvaluate();
        for (Upload upload : uploads) {
            String stuNum = upload.getUserId();
            int assignmentId = upload.getAssignmentId();
            uploadService.insertOrUpdate(assignmentId, stuNum, 1, new Date());
            try {
                //单个学生文件夹路径
                String directoryPath = upload.getUploadDirectory();
                //作业文件夹路径
                String assignmentDirectoryPath = directoryPath + "../";

                //创建测试用例文件
                List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
                for (QuestionListVo vo : questionVoList) {
                    for (TestCase testCase : vo.testCaseList) {
                        String inputFilePath = assignmentDirectoryPath + vo.questionNo + "_input_" + testCase.getTestCaseId() + ".txt";
                        FileUtil.addTxtFile(inputFilePath, testCase.getTestCaseContent());
                    }
                }


                List<FileInfo> fileInfoList = JSON.parseArray(upload.getUploadFileInfo(), FileInfo.class);
                for (FileInfo fileInfo : fileInfoList) {
                    String fileName = fileInfo.fileName;
                    String prefix = fileInfo.prefix;
                    String suffix = fileInfo.suffix;
                    int questionNo = Integer.parseInt(prefix);

                    System.out.println("正在编译学号" + stuNum + "下" + fileName + "文件");
                    Question question = questionService.findByAssignmentIdAndQuestionNo(assignmentId, questionNo);
                    if (question == null)
                        continue;

                    int questionId = question.getQuestionId();
                    boolean alreadyExist = studentQuestionService.findById(questionId, stuNum) != null;
                    //编译
                    ShellReturnInfo returnInfo = CompileUtil.isCompilePass(directoryPath, fileName);
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

                    //执行，比较测试用例和输出
                    System.out.println("正在执行学号" + stuNum + " 第" + questionId + "题文件");
                    double testCasePassNum = 0;
                    for (TestCase testCase : testCaseList) {
                        String inputFileName = question.getQuestionNo() + "_input_" + testCase.getTestCaseId() + ".txt";
                        String outputFileName = question.getQuestionNo() + "_output_" + testCase.getTestCaseId() + ".txt";
                        CompileUtil.execute(directoryPath, prefix + ".out", inputFileName, outputFileName);
                        String outputFilePath = directoryPath + "/" + outputFileName;
                        if (FileUtil.compareFileWithString(outputFilePath, testCase.getAnswer())) {
                            testCasePassNum++;
                        }
                    }
                    int testCaseScore = (int) ((testCasePassNum / testCaseList.size()) * 70);

                    //静态分析
                    System.out.println("正在分析学号" + stuNum + " 第" + question.getQuestionNo() + "题文件");
                    String resultFileName = prefix + "_result.json";
                    CompileUtil.evaluate(directoryPath, fileName, resultFileName);
                    String evaluateFilePath = directoryPath + "/" + question.getQuestionNo() + "_result.json";
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

                uploadService.insertOrUpdate(assignmentId, stuNum, 2);

            } catch (Exception e) {
                System.out.println(e.getMessage());
                LogKit.error(e.getMessage());
                uploadService.insertOrUpdate(assignmentId, stuNum, -1);
            }
        }
    }


}
