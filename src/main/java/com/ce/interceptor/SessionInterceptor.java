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
        String userId = controller.getSessionAttr("userId", "");
        if (userId.isEmpty()) {
            controller.redirect("/?errorType=sessionInvalid", true);
        } else {
            User user = userService.findByUserId(userId);
            if (user.getIsTeacher() == 0) {
                String url = controller.getRequest().getRequestURI();
                if (url.contains("testDb") || url.contains("test_case_edit") || url.contains("code_upload") || url.contains("similarity_analysis"))
                    controller.redirect("/noAuthority");
            } else {
                inv.invoke();
                controller.setAttr("user", user);
                controller.setAttr("userType", user.getIsTeacher());
            }
        }
    }
}
