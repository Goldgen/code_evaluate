package com.ce.controller;

import com.ce.config.JsonInfo;
import com.ce.config.MyConstants;
import com.ce.model.Assignment;
import com.ce.service.AssignmentService;
import com.ce.service.QuestionService;
import com.ce.service.TestCaseService;
import com.ce.util.CompileUtil;
import com.ce.util.FileUtil;
import com.ce.vo.QuestionListVo;
import com.jfinal.core.Controller;
import com.jfinal.upload.UploadFile;

import java.util.List;
import java.util.stream.Collectors;

public class UploadController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static QuestionService questionService = new QuestionService();

    private static TestCaseService testCaseService = new TestCaseService();

    public void index() {
        int assignmentId = getParaToInt(0);
        String tabType = getPara(1);
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
        setAttr("questionVoList", questionVoList);
        render("code_upload.html");
    }

    public void receive() {
        //上传文件
        UploadFile uploadFile = getFile();
        int assignmentId = getParaToInt("assignmentId");
        JsonInfo json = new JsonInfo(0);
        if (!uploadFile.getOriginalFileName().endsWith(".zip")) {
            uploadFile.getFile().delete();
            json.setResCode(1);
            json.setErrorMsg("仅支持zip文件！");
            renderJson(json);
            return;
        }

        StringBuilder errorMsg = new StringBuilder();
        String unionFolderName = FileUtil.generateFolderName();

        CompileUtil.unZipAll(MyConstants.uploadPath, uploadFile.getOriginalFileName(), unionFolderName);
        String assignmentDirectoryPath = MyConstants.uploadPath + unionFolderName + "/";
        List<String> stuNumList = FileUtil.getSubDirectoryName(assignmentDirectoryPath);
        for (String stuNum : stuNumList) {
            List<String> questionNoList = FileUtil.getCOrCppFilesName(assignmentDirectoryPath, stuNum)
                    .stream().map(x -> x.prefix).collect(Collectors.toList());
            List<String> allQuestionNoList = questionService.findByAssignmentId(assignmentId)
                    .stream().map(x -> x.getQuestionNo().toString()).collect(Collectors.toList());
            allQuestionNoList.removeAll(questionNoList);
            if (!allQuestionNoList.isEmpty()) {
                errorMsg.append("学号").append(stuNum).append("未提交的题号：");
                for (String questionId : allQuestionNoList) {
                    errorMsg.append(questionId).append(" ");
                }
                errorMsg.append("<br>");
            }
        }

        if (!errorMsg.toString().isEmpty()) {
            json.setResCode(2);
            json.setData(unionFolderName);
            json.setErrorMsg(errorMsg.toString());
            renderJson(json);
            return;
        }
        //修改作业状态
        assignmentService.update(assignmentId, 1, unionFolderName);
        renderJson(json);
    }

    public void cancelUpload() {
        String directoryName = getPara("directoryName");
        FileUtil.deleteDirectory(MyConstants.uploadPath + directoryName);

        JsonInfo json = new JsonInfo(0);
        renderJson(json);
    }

    public void confirmUpload() {
        int assignmentId = getParaToInt("assignmentId");
        String directoryName = getPara("directoryName");
        //修改作业状态
        assignmentService.update(assignmentId, 1, directoryName);
        redirect("/assignment/detail/" + assignmentId + "-code_upload");
    }
}
