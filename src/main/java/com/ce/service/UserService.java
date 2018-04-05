package com.ce.service;

import com.ce.model.StudentClass;
import com.ce.model.User;
import com.ce.model.base.BaseStudentClass;

import java.util.List;
import java.util.stream.Collectors;

public class UserService {

    private static final User userDao = new User().dao();

    private static final StudentClass studentClassDao = new StudentClass().dao();

    public User findById(String userId) {
        return userDao.findById(userId);
    }

    public void deleteById(String userId) {
        userDao.deleteById(userId);
    }

    public User findByUserId(String userId) {
        return userDao.findFirst("select * from user where userId = ?", userId);
    }

    public List<String> findStudentIdByClassId(String classId) {
        return studentClassDao.find("select * from student_class where classId = ?", classId)
                .stream().map(BaseStudentClass::getUserId).collect(Collectors.toList());
    }
}
