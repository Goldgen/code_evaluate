package com.ce.controller;

import com.ce.model.Class;
import com.ce.service.ClassService;
import com.ce.util.CommonUtil;
import com.ce.vo.ClassListVo;
import com.jfinal.core.Controller;

import java.util.List;
import java.util.stream.Collectors;

public class ClassController extends Controller {

    private static ClassService classService = new ClassService();

    public void list() {
        String userId = getSessionAttr("userId", "");
        String userType = getSessionAttr("userType", "student");
        List<Class> classList;
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


}



