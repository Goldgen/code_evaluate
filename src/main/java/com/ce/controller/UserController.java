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
        } else if(user.getIsTeacher()!=1){
            setAttr("errorType", "notTeacher");
        }  else{
            setSessionAttr("userId", userId);
            redirect("classes");
        }
    }

    public void logout() {
        removeSessionAttr("userId");
        redirect("login");
    }
}