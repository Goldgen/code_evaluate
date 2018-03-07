package com.ce.service;

import com.ce.model.Assignment;

import java.util.List;

public class AssignmentService {

    private static final Assignment dao = new Assignment().dao();

    public Assignment findById(int id) {
        return dao.findById(id);
    }

    public void deleteById(int id) {
        dao.deleteById(id);
    }

    public List<Assignment> findUnEvaluate() {
        return dao.find("select * from assignment where status = 1");
    }

    public List<Assignment> findByClassId(String classId) {
        return dao.find("select * from assignment where classId = ? order by startDate DESC", classId);
    }

}
