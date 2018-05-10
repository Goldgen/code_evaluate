package com.ce.interceptor;

import com.ce.model.second.User;
import com.ce.service.UserService;
import com.jfinal.aop.Interceptor;
import com.jfinal.aop.Invocation;
import com.jfinal.core.Controller;

public class SessionInterceptor implements Interceptor {

    private static UserService userService = new UserService();

    public void intercept(Invocation inv) {
        Controller controller = inv.getController();
        String userId = controller.getSessionAttr("userId", "");
        if (userId.isEmpty()) {
            controller.redirect("/?errorType=sessionInvalid", true);
        } else {
            User user = userService.findByUserId(userId);
            String url = controller.getRequest().getRequestURI();
            if (user.getIsTeacher() == 0) {
                if (url.contains("testDb") || url.contains("question")  || url.contains("similarity")|| url.contains("analysis")){
                    controller.redirect("/noAuthority");
                    return;
                }
            }
            if (user.getIsTeacher() == 1) {
                if (url.contains("upload")){
                    controller.redirect("/noAuthority");
                    return;
                }
            }
            inv.invoke();
            if (url.contains("question")){
                controller.setAttr("sidebar", 1);
            }
            if (url.contains("upload")){
                controller.setAttr("sidebar", 2);
            }
            if (url.contains("execute")){
                controller.setAttr("sidebar", 3);
            }
            if (url.contains("similarity")){
                controller.setAttr("sidebar", 4);
            }
            controller.setAttr("user", user);
            controller.setAttr("userType", user.getIsTeacher());
        }
    }
}
