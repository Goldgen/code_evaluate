package com.ce.service;

import com.ce.model.second.StudentClass;
import com.ce.model.second.User;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class UserService {

    private static final User userDao = new User().dao();

    private static final StudentClass studentClassDao = new StudentClass().dao();

    public User findByUserId(String userId) {
        return userDao.findFirst("select * from user where userId = ?", userId);
    }

    public List<User> findByIds(List<String> idList) {
        if (idList.isEmpty())
            return new ArrayList<>();
        StringBuilder idListStr = new StringBuilder("(");
        for (String id : idList) {
            if (id.equals(idList.get(idList.size() - 1))) {
                idListStr.append(id).append(")");
            } else {
                idListStr.append(id).append(",");
            }
        }
        return userDao.find("select * from user where userId in " + idListStr);
    }

    public List<String> findStudentIdByClassId(String classId) {
        return studentClassDao.find("select * from student_class where classId = ?", classId)
                .stream().map(StudentClass::getUserId).collect(Collectors.toList());
    }

    public List<User> findStudentByClassId(String classId) {
        return userDao.find("select  u.userId,u.userName from user u join student_class sc on u.userId=sc.userId where sc.classId = ?", classId);
    }
}
