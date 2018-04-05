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
        //temp
        //controller.setSessionAttr("userId", "10112512345");
        String teacherId = controller.getSessionAttr("userId", "");
        if (teacherId.isEmpty()) {
            controller.redirect("/?errorType=sessionInvalid", true);
            return;
        } else {
            inv.invoke();
            User user = userService.findByUserId(teacherId);
            controller.setAttr("user", user);
        }
    }
}
