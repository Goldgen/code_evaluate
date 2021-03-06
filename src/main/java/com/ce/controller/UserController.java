package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.second.ClassTutor;
import com.ce.model.second.User;
import com.ce.service.ClassTutorService;
import com.ce.service.UserService;
import com.jfinal.aop.Clear;
import com.jfinal.core.Controller;

import javax.servlet.http.HttpSession;
import java.util.List;
import java.util.stream.Collectors;

public class UserController extends Controller {

    private static UserService userService = new UserService();

    private static ClassTutorService classTutorService = new ClassTutorService();


    @Clear
    public void index() {
        String errorType = getPara("errorType");
        if (errorType != null && errorType.equals("sessionInvalid")) {
            setAttr("errorType", "sessionInvalid");
        }
        render("login.html");
    }

    @Clear
    public void login() {
        String userId = getPara("userId");
        String password = getPara("password");
        User user = userService.findByUserId(userId);
        boolean isTeacher = isTeacher(user);
        if (user == null) {
            setAttr("errorType", "idWrong");
        } else if (!user.getPsd().equals(password)) {
            setAttr("errorType", "pwdWrong");
        } else {
            setSessionAttr("userId", userId);
            setSessionAttr("isTeacher", isTeacher);
            redirect("info/classes");
        }
    }

    private boolean isTeacher(User user) {
        if (user == null) return false;
        else if (user.getIsTeacher() == 1) return true;
        else {
            String userId = user.getUserId();
            List<String> classTutorList = classTutorService.findAll().stream().filter(x -> x.getUserId().equals(userId)).map(x->x.getClassId()).collect(Collectors.toList());
            if (!classTutorList.isEmpty()) {
                setSessionAttr("classIdList", JSON.toJSONString(classTutorList));
                return true;
            } else return false;
        }

    }

    public void logout() {
        HttpSession session = getRequest().getSession(false);
        if (session != null) {
            session.invalidate();
        }
        redirect("/");
    }

    @Clear
    public void noAuthority() {
        render("no_authority.html");
    }
}
