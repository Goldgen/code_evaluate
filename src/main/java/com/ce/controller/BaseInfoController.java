package com.ce.controller;

import com.ce.model.Assignment;
import com.ce.model.Class;
import com.ce.service.AssignmentService;
import com.ce.service.ClassService;
import com.ce.util.CommonUtil;
import com.ce.vo.ClassListVo;
import com.jfinal.core.Controller;

import java.util.List;
import java.util.stream.Collectors;

public class BaseInfoController extends Controller {

    private static ClassService classService = new ClassService();

    private static AssignmentService assignmentService = new AssignmentService();

    public void classes() {
        String userId = getSessionAttr("userId", "");
        String userType = getSessionAttr("userType", "student");
        List<Class> classList;
        System.out.println(userType);
        if (userType.equals("teacher")) {
            classList = classService.findAllByTeacherId(userId);
        } else {
            classList = classService.findAllByStudentId(userId);
        }

        List<ClassListVo> classListVoList = classList.stream().map(x -> {
            ClassListVo vo = new ClassListVo();
            vo.classId = x.getClassId();
            vo.courseName = x.getStr("courseName");
            vo.termName = x.getStr("termName");
            return vo;
        }).collect(Collectors.toList());
        int totalCount = classListVoList.size();
        List<List<ClassListVo>> result = CommonUtil.split(classListVoList, 10); //把列表拆分成10个一组
        setAttr("totalCount", totalCount);
        setAttr("classLists", result);
        render("class_list.html");
    }

    public void assignments() {
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
    
}
