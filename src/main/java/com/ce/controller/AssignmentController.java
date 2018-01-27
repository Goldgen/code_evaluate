package com.ce.controller;

import com.ce.model.Assignment;
import com.ce.model.Class;
import com.ce.service.AssignmentService;
import com.ce.service.ClassService;
import com.ce.util.CommonUtil;
import com.ce.vo.ClassListVo;
import com.jfinal.core.Controller;

import java.util.List;

public class AssignmentController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static ClassService classService = new ClassService();

    public void index() {
        String classId = getPara(0);

        List<Assignment> assignmentList = assignmentService.findByClassId(classId);
        int totalCount=assignmentList.size();
        List<List<Assignment>> result=CommonUtil.split(assignmentList,10); //把列表拆分成10个一组

        Class classInfo=classService.findSingleByClassId(classId);
        ClassListVo vo=new ClassListVo();
        vo.classId=classInfo.getClassId();
        vo.courseName=classInfo.getStr("courseName");
        vo.termName=classInfo.getStr("termName");

        setAttr("totalCount", totalCount);
        setAttr("assignmentLists", result);
        setAttr("classInfo", vo);
        render("assignment_list.html");
    }
}
