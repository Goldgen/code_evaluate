package com.ce.service;

import com.ce.model.Class;
import com.ce.model.StudentClass;
import com.ce.model.base.BaseStudentClass;
import com.jfinal.plugin.activerecord.Page;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class ClassService {

    private static final Class dao = new Class().dao();

    private static final StudentClass scdao = new StudentClass().dao();

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
                "where cl.userId=? order by cl.classId desc";
        return dao.find(sql, teacherId);
    }

    public List<Class> findAllByStudentId(String studentId) {
        List<String> classIdList = scdao.find("select * from student_class where userId = ?", studentId)
                .stream().map(StudentClass::getClassId).collect(Collectors.toList());
        if (classIdList.isEmpty())
            return new ArrayList<>();
        String idListStr = "(";
        for (String id : classIdList) {
            if (id.equals(classIdList.get(classIdList.size() - 1))) {
                idListStr += "'" + id + "'" + ")";
            } else {
                idListStr += "'" + id + "'" + ",";
            }
        }

        String sql = "select cl.*,co.courseName,t.termName " +
                "from class cl inner join term t inner join course co " +
                "on t.termId=cl.termId and co.courseId=cl.courseId " +
                "where cl.classId in " + idListStr + " order by cl.classId desc";
        return dao.find(sql);
    }

    public Class findSingleByClassId(String classId) {
        String sql = "select cl.*,co.courseName,t.termName " +
                "from class cl inner join term t inner join course co " +
                "on t.termId=cl.termId and co.courseId=cl.courseId " +
                "where cl.classId= ? ";
        return dao.findFirst(sql, classId);
    }
}
