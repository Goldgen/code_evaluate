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

    public void index() {
        String teacherId = getSessionAttr("userId", "");
        List<ClassListVo> classList = classService.findAllByTeacherId(teacherId).stream().map(x->{
            ClassListVo vo=new ClassListVo();
            vo.classId=x.getClassId();
            vo.courseName=x.getStr("courseName");
            vo.termName=x.getStr("termName");
            return vo;
        }).collect(Collectors.toList());
        int totalCount=classList.size();
        List<List<ClassListVo>> result= CommonUtil.split(classList,10); //把列表拆分成10个一组
        setAttr("totalCount", totalCount);
        setAttr("classLists",result);
        render("class_list.html");
    }


}



