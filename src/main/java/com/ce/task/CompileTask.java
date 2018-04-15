package com.ce.task;

import com.alibaba.fastjson.JSON;
import com.ce.config.MyConstants;
import com.ce.model.*;
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

    private static AssignmentService assignmentService = new AssignmentService();
    private static TestCaseService testCaseService = new TestCaseService();
    private static QuestionService questionService = new QuestionService();
    private static StudentQuestionService studentQuestionService = new StudentQuestionService();
    private static SimilarityService similarityService = new SimilarityService();


    //TODO 路径问题加以整理
    @Override
    public void run() {
        List<Assignment> assignments = assignmentService.findUnEvaluate();
        for (Assignment assignment : assignments) {
            int assignmentId = assignment.getAssignmentId();
            String directoryName = assignment.getDirectoryName();
            assignmentService.update(assignmentId, new Date());
            String assignmentDirectoryPath = MyConstants.uploadPath + directoryName + "/";

            //预先记录相似度分析的文件名
            Map<Integer, Temp> questionFilesPathMap = new TreeMap<>();

            List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
            //创建测试用例文件
            for (QuestionListVo vo : questionVoList) {
                Temp temp = new Temp();
                temp.questionId = vo.questionId;
                temp.questionFilesPath = "";
                questionFilesPathMap.put(vo.questionNo, temp);
                for (TestCase testCase : vo.testCaseList) {
                    String inputFilePath = assignmentDirectoryPath + vo.questionNo + "_input_" + testCase.getTestCaseId() + ".txt";
                    FileUtil.addTxtFile(inputFilePath, testCase.getTestCaseContent());
                }
            }


            //获取一个作业下面所有提交作业的学生学号
            List<String> stuNumList = FileUtil.getSubDirectoryName(assignmentDirectoryPath);
            for (String stuNum : stuNumList) {

                List<FileInfo> fileInfoList = FileUtil.getCOrCppFilesName(assignmentDirectoryPath, stuNum);
                for (FileInfo fileInfo : fileInfoList) {
                    String fileName = fileInfo.fileName;
                    String prefix = fileInfo.prefix;
                    String suffix = fileInfo.suffix;
                    int questionNo = Integer.parseInt(prefix);

                    Temp tempInfo = questionFilesPathMap.get(questionNo);
                    if (tempInfo != null) {
                        if (tempInfo.questionFilesPath.isEmpty()) {
                            tempInfo.questionFilesPath += "./" + stuNum + "/" + prefix + "." + suffix;
                        } else {
                            tempInfo.questionFilesPath += " ./" + stuNum + "/" + prefix + "." + suffix;
                        }
                        questionFilesPathMap.replace(questionNo, tempInfo);
                    }

                    LogKit.info("正在编译学号" + stuNum + "下" + fileName + "文件");
                    String fatherFilePath = assignmentDirectoryPath + stuNum;
                    Question question = questionService.findByAssignmentIdAndQuestionNo(assignmentId, questionNo);
                    if (question == null)
                        continue;

                    int questionId = question.getQuestionId();
                    boolean alreadyExist = studentQuestionService.findById(questionId, stuNum) != null;
                    //编译
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

                    //执行，比较测试用例和输出
                    LogKit.info("正在执行学号" + stuNum + " 第" + questionId + "题文件");
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

                    //静态分析
                    LogKit.info("正在分析学号" + stuNum + " 第" + questionId + "题文件");
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

            //相似度分析
            List<Similarity> similarityList = new ArrayList<>();
            for (Map.Entry<Integer, Temp> entry : questionFilesPathMap.entrySet()) {
                CompileUtil.similarityTest(assignmentDirectoryPath, entry.getKey(), entry.getValue().questionFilesPath);
                String content = FileUtil.readFile(assignmentDirectoryPath + "similarity" + entry.getKey() + ".txt");
                Pattern pattern = Pattern.compile("\\./(.*?)/" + entry.getKey() + "\\.c consists for (.*?) % of \\./(.*?)/" + entry.getKey() + "\\.c");
                Matcher matcher = pattern.matcher(content);
                while (matcher.find()) {
                    String studentId1 = matcher.group(1);
                    String studentId2 = matcher.group(3);
                    Similarity test = similarityList.stream()
                            .filter(x -> x.getUserId2().equals(studentId1) && x.getUserId1().equals(studentId2) && x.getQuestionId() == entry.getValue().questionId)
                            .findFirst().orElse(null);
                    if (test != null) {
                        test.setToSimilarity(Integer.parseInt(matcher.group(2)));
                    } else {
                        Similarity info = new Similarity();
                        info.setQuestionId(entry.getValue().questionId);
                        info.setUserId1(matcher.group(1));
                        info.setUserId2(matcher.group(3));
                        info.setFromSimilarity(Integer.parseInt(matcher.group(2)));
                        similarityList.add(info);
                    }
                }
            }
            for (Similarity similarity : similarityList) {
                if (similarityService.findById(similarity.getQuestionId(), similarity.getUserId1(), similarity.getUserId2()) != null) {
                    similarity.update();
                } else {
                    similarity.save();
                }
            }
            //相似度分析end

            assignmentService.update(assignmentId,2);
        }
    }

    class Temp {
        String questionFilesPath;
        int questionId;
    }
}
