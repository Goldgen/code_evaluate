package com.ce.service;

import com.ce.model.Class;
import com.jfinal.plugin.activerecord.Page;

import java.util.List;

public class ClassService {

    private static final Class dao = new Class().dao();

    public Class findById(String id) {
        return dao.findById(id);
    }

    public void deleteById(String id) {
        dao.deleteById(id);
    }

    public List<Class> findAllByTeacherId(String teacherId) {
        String sql = "select cl.*,co.courseName,t.termName " +
                "from class cl inner join term t inner join course co " +
                "on t.termId=cl.termId and co.courseId=cl.courseId " +
                "where cl.userId=? ";
        return dao.find(sql, teacherId);
    }

    public Class findSingleByClassId(String classId) {
        String sql = "select cl.*,co.courseName,t.termName " +
                "from class cl inner join term t inner join course co " +
                "on t.termId=cl.termId and co.courseId=cl.courseId " +
                "where cl.classId= ? ";
        return dao.findFirst(sql, classId);
    }
}
