package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.config.JsonInfo;
import com.ce.config.MyConstants;
import com.ce.model.first.*;
import com.ce.model.second.Assignment;
import com.ce.service.*;
import com.ce.util.CompileUtil;
import com.ce.util.FileUtil;
import com.ce.vo.FileInfo;
import com.ce.vo.OclintInfoVo;
import com.ce.vo.QuestionListVo;
import com.ce.vo.ShellReturnInfo;
import com.jfinal.core.Controller;
import com.jfinal.upload.UploadFile;

import java.io.IOException;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.stream.Collectors;

public class UploadController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static QuestionService questionService = new QuestionService();

    private static StudentQuestionService studentQuestionService = new StudentQuestionService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static UploadService uploadService = new UploadService();

    public void index() {
        int assignmentId = getParaToInt(0);
        String userId = getSessionAttr("userId");
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("isExpired", assignment.getEndDate().compareTo(new Date()) < 0);
        setAttr("assignment", assignment);
        Upload upload = uploadService.findById(assignmentId, userId);

        setAttr("upload", upload);
        List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
        setAttr("questionVoList", questionVoList);
        render("code_upload.html");
    }

    public void receive() throws IOException, InterruptedException {

        UploadFile uploadFile = getFile();
        int assignmentId = getParaToInt("assignmentId");
        Assignment assignment = assignmentService.findById(assignmentId);
        JsonInfo json = new JsonInfo(0);

        Upload upload = uploadService.findById(assignmentId, getSessionAttr("userId"));
        if (upload != null && upload.getStatus() == 1) {
            uploadFile.getFile().delete();
            json.setResCode(1);
            json.setErrorMsg("上次上传的作业仍在批改中，请暂时不要上传！");
            renderJson(json);
            return;
        }

        if (!uploadFile.getOriginalFileName().endsWith(".zip")) {
            uploadFile.getFile().delete();
            json.setResCode(1);
            json.setErrorMsg("仅支持zip文件！");
            renderJson(json);
            return;
        }


        String unionFolderName = assignment.getUploadDirectory();

        if (unionFolderName.isEmpty()) {
            unionFolderName = FileUtil.generateFolderName();
        }

        String assignmentDirectoryPath = MyConstants.uploadPath + unionFolderName + "/";
        String stuNum = getSessionAttr("userId");
        CompileUtil.unZip(assignmentDirectoryPath, uploadFile.getOriginalFileName(), stuNum);
        assignmentService.update(assignmentId, unionFolderName);

        //获取实际上传的题号json
        List<String> allQuestionNoList = questionService.findByAssignmentId(assignmentId)
                .stream().map(x -> x.getQuestionNo().toString()).collect(Collectors.toList());

        List<FileInfo> fileInfoList = FileUtil.getCOrCppFilesName(assignmentDirectoryPath + stuNum)
                .stream().filter(x -> allQuestionNoList.contains(x.prefix)).collect(Collectors.toList());

        String uploadFileInfoJson = JSON.toJSONString(fileInfoList);

        uploadService.insertOrUpdate(assignmentId, stuNum, assignmentDirectoryPath + stuNum + "/", 1, uploadFileInfoJson);

        renderJson(json);
    }

    public void edit() {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");
        String type = getPara("type");
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        Question question = questionService.findById(questionId);
        setAttr("question", question);
        if (type != null && type.equals("c")) {
            render("c_code_edit.html");
        } else {
            render("cpp_code_edit.html");
        }
    }

    public void run() throws IOException, InterruptedException {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");
        String code = getPara("code");
        int language = getParaToInt("language");
        String stuNum = getSessionAttr("userId");

        String suffix = language == 1 ? ".c" : ".cpp";

        Assignment assignment = assignmentService.findById(assignmentId);
        Question question = questionService.findById(questionId);

        String unionFolderName = assignment.getUploadDirectory();

        if (unionFolderName.isEmpty()) {
            unionFolderName = FileUtil.generateFolderName();
        }

        String studentDirectoryPath = MyConstants.uploadPath + unionFolderName + "/" + getSessionAttr("userId") + "/";

        FileUtil.createDirectory(studentDirectoryPath);
        FileUtil.createFile(studentDirectoryPath + question.getQuestionNo() + suffix, code);

        String fileName = question.getQuestionNo() + suffix;
        String prefix = question.getQuestionNo().toString();


        boolean alreadyExist = studentQuestionService.findById(questionId, stuNum) != null;
        //编译
        ShellReturnInfo returnInfo = CompileUtil.isCompilePass(studentDirectoryPath, fileName);
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
        List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);

        List<TestCase> testCaseList = questionVoList.stream().filter(x -> x.questionId == questionId)
                .findFirst().orElse(new QuestionListVo()).testCaseList;

        //执行，比较测试用例和输出
        System.out.println("正在执行学号" + stuNum + " 第" + questionId + "题文件");
        double testCasePassNum = 0;
        for (TestCase testCase : testCaseList) {
            String inputFileName = question.getQuestionNo() + "_input_" + testCase.getTestCaseId() + ".txt";
            String outputFileName = question.getQuestionNo() + "_output_" + testCase.getTestCaseId() + ".txt";
            CompileUtil.execute(studentDirectoryPath, prefix + ".out", inputFileName, outputFileName);
            String outputFilePath = studentDirectoryPath + "/" + outputFileName;
            if (FileUtil.compareFileWithString(outputFilePath, testCase.getAnswer())) {
                testCasePassNum++;
            }
        }
        int testCaseScore = (int) ((testCasePassNum / testCaseList.size()) * 70);

        //静态分析
        System.out.println("正在分析学号" + stuNum + " 第" + question.getQuestionNo() + "题文件");
        String resultFileName = prefix + "_result.json";
        CompileUtil.evaluate(studentDirectoryPath, fileName, resultFileName);
        String evaluateFilePath = studentDirectoryPath + "/" + question.getQuestionNo() + "_result.json";
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

}
