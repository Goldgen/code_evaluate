package com.ce.validator;

import com.jfinal.core.Controller;
import com.jfinal.validate.Validator;

public class LoginValidator extends Validator {
    protected void validate(Controller c) {
        validateRequiredString("userId", "errorType", "idEmpty");
        validateRequiredString("password", "errorType", "pwdEmpty");
    }
    protected void handleError(Controller c) {
        c.keepPara("userId");
        c.keepPara("password");
        c.render("login.html");
    }
}