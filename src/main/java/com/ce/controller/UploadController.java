package com.ce.controller;

import com.ce.config.JsonInfo;
import com.ce.config.MyConstants;
import com.ce.model.first.Upload;
import com.ce.model.second.Assignment;
import com.ce.service.*;
import com.ce.util.CompileUtil;
import com.ce.util.FileUtil;
import com.ce.vo.QuestionListVo;
import com.jfinal.core.Controller;
import com.jfinal.upload.UploadFile;

import java.io.IOException;
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

        uploadService.insertOrUpdate(assignmentId, stuNum, assignmentDirectoryPath + stuNum + "/", 1);

        renderJson(json);
    }

    public void cancelUpload() throws IOException {
        String directoryName = getPara("directoryName");
        FileUtil.deleteDirectory(MyConstants.uploadPath + directoryName);

        JsonInfo json = new JsonInfo(0);
        renderJson(json);
    }

    public void confirmUpload() throws IOException {
        int assignmentId = getParaToInt("assignmentId");
        String directoryName = getPara("directoryName");
        //修改作业状态
        uploadService.insertOrUpdate(assignmentId, getSessionAttr("userId"), directoryName, 1);
        redirect("/assignment/detail/" + assignmentId + "-code_upload");
    }
}
