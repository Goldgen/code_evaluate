package com.ce.interceptor;

import com.ce.model.User;
import com.ce.service.UserService;
import com.jfinal.aop.Interceptor;
import com.jfinal.aop.Invocation;
import com.jfinal.core.Controller;

public class SessionInterceptor implements Interceptor {

    private static UserService userService = new UserService();

    public void intercept(Invocation inv) {
        Controller controller = inv.getController();
        String teacherId = controller.getSessionAttr("userId", "");
        if (teacherId.isEmpty()) {
            controller.setAttr("errorType", "sessionInvalid");
            controller.render("login.html");
            return;
        } else {
            inv.invoke();
            User user = userService.findByUserId(teacherId);
            controller.setAttr("user", user);
        }
    }
}
