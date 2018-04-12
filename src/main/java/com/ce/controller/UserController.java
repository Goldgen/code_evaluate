package com.ce.controller;

import com.ce.model.User;
import com.ce.service.UserService;
import com.ce.validator.LoginValidator;
import com.jfinal.aop.Before;
import com.jfinal.aop.Clear;
import com.jfinal.core.Controller;

public class UserController extends Controller {

    private static UserService userService = new UserService();

    @Clear
    public void index() {
        String errorType = getPara("errorType");
        if (errorType != null && errorType.equals("sessionInvalid")) {
            setAttr("errorType", "sessionInvalid");
        }
        render("login.html");
    }

    @Clear
    @Before(LoginValidator.class)
    public void login() {
        String userId = getPara("userId");
        String password = getPara("password");
        User user = userService.findByUserId(userId);
        if (user == null) {
            setAttr("errorType", "idWrong");
        } else if (!user.getPsd().equals(password)) {
            setAttr("errorType", "pwdWrong");
        } else if (user.getIsTeacher() != 1) {
            setSessionAttr("userId", userId);
            setSessionAttr("userType", "student");
            redirect("class/list");
        } else {
            setSessionAttr("userId", userId);
            setSessionAttr("userType", "teacher");
            redirect("class/list");
        }


    }

    public void logout() {
        removeSessionAttr("userId");
        redirect("login");
    }

    @Clear
    public void noAuthority() {
        render("no_authority.html");
    }
}
