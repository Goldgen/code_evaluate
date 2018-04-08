package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.config.JsonInfo;
import com.ce.config.MyConstants;
import com.ce.model.*;
import com.ce.model.Class;
import com.ce.model.base.BaseStudentQuestion;
import com.ce.service.*;
import com.ce.util.CommonUtil;
import com.ce.util.CompileUtil;
import com.ce.util.FileUtil;
import com.ce.vo.ClassListVo;
import com.ce.vo.ExecuteResultVo;
import com.ce.vo.QuestionListVo;
import com.ce.vo.QuestionResultVo;
import com.jfinal.core.ActionKey;
import com.jfinal.core.Controller;
import com.jfinal.kit.PathKit;
import com.jfinal.upload.UploadFile;

import java.io.File;
import java.util.*;
import java.util.stream.Collector;
import java.util.stream.Collectors;

public class AssignmentController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static QuestionService questionService = new QuestionService();

    private static ClassService classService = new ClassService();

    private static UserService userService = new UserService();

    private static StudentQuestionService studentQuestionService = new StudentQuestionService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static ViolationService violationService = new ViolationService();

    public void list() {
        String classId = getPara(0);

        List<Assignment> assignmentList = assignmentService.findByClassId(classId);
        int totalCount = assignmentList.size();
        List<List<Assignment>> result = CommonUtil.split(assignmentList, 10); //把列表拆分成10个一组

        Class classInfo = classService.findSingleByClassId(classId);
        ClassListVo vo = new ClassListVo();
        vo.classId = classInfo.getClassId();
        vo.courseName = classInfo.getStr("courseName");
        vo.termName = classInfo.getStr("termName");

        setAttr("totalCount", totalCount);
        setAttr("assignmentLists", result);
        setAttr("classInfo", vo);
        render("assignment_list.html");
    }

    public void detail() {
        int assignmentId = getParaToInt(0);
        String tabType = getPara(1);
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        switch (tabType) {
            case "test_case_edit":
                List<QuestionListVo> questionVoList1 = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
                setAttr("questionSize", questionVoList1.size());
                setAttr("questionVoList", questionVoList1);
                render("test_case_edit.html");
                break;
            case "code_upload":
                //int status = getParaToInt("status");
                List<QuestionListVo> questionVoList2 = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
                setAttr("questionVoList", questionVoList2);
                render("code_upload.html");
                break;
            case "execute_result":
                List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId);
                setAttr("executeResultVoList", executeResultVoList);
                render("execute_result.html");
                break;
            case "similarity_analysis":
                render("similarity_analysis.html");
                break;
            default:
                break;
        }
    }

    public void upload() {

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

        //重命名
//        String unionFileName = FileUtil.generateFileName(uploadFile.getOriginalFileName());
//        String filePath = PathKit.getWebRootPath() + "/upload/" + unionFileName;
//        uploadFile.getFile().renameTo(new File(filePath));

        StringBuilder errorMsg = new StringBuilder();
        String assignmentIdStr = Integer.toString(assignmentId);

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
        Assignment assignment = assignmentService.findById(assignmentId);
        if (assignment.getStatus() == -1) {
            assignment.setStatus(1);
        } else {
            assignment.setStatus(assignment.getStatus() + 1);
        }
        assignment.setIsEvaluateFinish(false);
        assignment.setDirectoryName(unionFolderName);
        assignment.update();
        renderJson(json);
    }

    public void cancelUpload() {
        String assignmentId = getPara("assignmentId");
        String directoryName = getPara("directoryName");
        FileUtil.deleteDirectory(MyConstants.uploadPath + directoryName);

        JsonInfo json = new JsonInfo(0);
        renderJson(json);
    }

    public void confirmUpload() {
        int assignmentId = getParaToInt("assignmentId");
        String directoryName = getPara("directoryName");
        Assignment assignment = assignmentService.findById(assignmentId);
        if (assignment.getStatus() == -1) {
            assignment.setStatus(1);
        } else {
            assignment.setStatus(assignment.getStatus() + 1);
        }
        assignment.setIsEvaluateFinish(false);
        assignment.setDirectoryName(directoryName);
        assignment.update();
        redirect("/assignment/detail/" + assignmentId + "-code_upload");
    }

    public void allExcel(){
        int assignmentId = getParaToInt("assignmentId");
        List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId);
    }

    public List<ExecuteResultVo> getCompleteExecuteResult(int assignmentId) {
        List<ExecuteResultVo> executeResultVoList = new ArrayList<>();
        int questionNum = questionService.findByAssignmentId(assignmentId).size();
        Map<String, List<StudentQuestion>> listMap = studentQuestionService.findByAssignmentId(assignmentId)
                .stream().collect(Collectors.groupingBy(StudentQuestion::getUserId));
        for (Map.Entry<String, List<StudentQuestion>> entry : listMap.entrySet()) {
            ExecuteResultVo executeResultVo = new ExecuteResultVo();
            executeResultVo.studentId = entry.getKey();
            User student = userService.findByUserId(entry.getKey());
            executeResultVo.studentName = student == null ? "无姓名" : student.getUserName();
            executeResultVo.questionResultList = entry.getValue().stream().map(x -> {
                QuestionResultVo questionResultVo = new QuestionResultVo();
                questionResultVo.questionNo = x.get("questionNo");
                questionResultVo.isCompilePass = x.getIsCompilePass();
                questionResultVo.compileErrorInfo = x.getCompileErrorInfo();
                questionResultVo.testCaseScore = x.getTestCaseScore();
                questionResultVo.evaluateScore = x.getEvaluationScore();
                List<Integer> violationIds = JSON.parseArray(x.getViolationIds(), Integer.class);
                questionResultVo.violationList = violationService.findByIds(violationIds);
                return questionResultVo;
            }).collect(Collectors.toList());

            int score = 0;
            for (QuestionResultVo questionResultVo : executeResultVo.questionResultList) {
                score += questionResultVo.evaluateScore;
                score += questionResultVo.testCaseScore;
            }
            score = score / questionNum;
            executeResultVo.score = score;
            executeResultVoList.add(executeResultVo);
        }
        Collections.sort(executeResultVoList);
        return executeResultVoList;
    }



}
