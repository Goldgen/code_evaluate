package com.ce.service;

import com.ce.model.User;

public class UserService {

    private static final User dao = new User().dao();

    public User findById(String userId) {
        return dao.findById(userId);
    }

    public void deleteById(String userId) {
        dao.deleteById(userId);
    }

    public User findByUserId(String userId) {
        return dao.findFirst("select * from user where userId = ?", userId);
    }
}
