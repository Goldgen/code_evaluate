package com.ce.controller;

import com.ce.model.Assignment;
import com.ce.model.Class;
import com.ce.model.TestCase;
import com.ce.service.AssignmentService;
import com.ce.service.ClassService;
import com.ce.service.TestCaseService;
import com.ce.util.CommonUtil;
import com.ce.vo.ClassListVo;
import com.ce.vo.QuestionListVo;
import com.jfinal.core.ActionKey;
import com.jfinal.core.Controller;
import com.jfinal.kit.PathKit;
import com.jfinal.upload.UploadFile;

import java.io.File;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.stream.Collectors;

public class AssignmentController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static ClassService classService = new ClassService();

    private static TestCaseService testCaseService = new TestCaseService();

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
                List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
                setAttr("questionSize",questionVoList.size());
                setAttr("questionVoList", questionVoList);
                render("test_case_edit.html");
                break;
            case "code_upload":
                render("code_upload.html");
                break;
            case "execute_result":
                render("execute_result.html");
                break;
            case "similarity_analysis":
                render("similarity_analysis.html");
                break;
            default:
                break;
        }
    }

    public void codeUpload() {

        //上传文件
        UploadFile uploadFile = getFile();
        int assignmentId = getParaToInt("assignmentId");
        String fileName = PathKit.getWebRootPath() + "/upload/" + assignmentId + ".zip";
        uploadFile.getFile().renameTo(new File(fileName));

        //修改作业状态
        Assignment assignment = assignmentService.findById(assignmentId);
        assignment.setStatus(1);
        assignment.update();

        redirect("/assignment/detail/" + assignmentId + "-code_upload");
    }


}
