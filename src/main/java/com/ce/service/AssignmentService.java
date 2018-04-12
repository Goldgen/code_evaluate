package com.ce.service;

import com.ce.config.MyConstants;
import com.ce.model.Assignment;
import com.ce.util.FileUtil;

import java.util.Date;
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
        return dao.find("select * from assignment where assignmentStatus = 1");
    }

    public List<Assignment> findByClassId(String classId) {
        return dao.find("select * from assignment where classId = ? order by startDate DESC", classId);
    }

    public void update(int assignmentId, int assignmentStatus) {
        Assignment assignment = dao.findById(assignmentId);
        if (assignment != null) {
            assignment.setAssignmentStatus(assignmentStatus);
            assignment.update();
        }
    }

    public void update(int assignmentId, Date evaluateTime) {
        Assignment assignment = dao.findById(assignmentId);
        if (assignment != null) {
            assignment.setEvaluateTime(evaluateTime);
            assignment.update();
        }
    }

    public void update(int assignmentId, int assignmentStatus, String directoryName) {
        Assignment assignment = dao.findById(assignmentId);
        if (assignment != null) {
            //删除以前的文件
            if (!assignment.getDirectoryName().isEmpty()) {
                FileUtil.deleteDirectory(MyConstants.uploadPath + assignment.getDirectoryName());
            }
            assignment.setAssignmentStatus(assignmentStatus);
            assignment.setDirectoryName(directoryName);
            assignment.update();
        }
    }

}
