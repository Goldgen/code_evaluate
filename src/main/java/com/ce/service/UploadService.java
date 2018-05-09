package com.ce.service;

import com.ce.model.first.Upload;

import java.util.List;

public class UploadService {

    private static final Upload dao = new Upload().dao();

    public Upload findById(int assignmentId, String userId) {
        return dao.findById(assignmentId, userId);
    }

    public List<Upload> findByAssignmentId(int assignmentId) {
        return dao.find("select * from upload where assignmentId = ?", assignmentId);
    }


    public void insertOrUpdate(int assignmentId, String userId, String uploadDirectory, int status) {
        Upload upload = this.findById(assignmentId, userId);
        if (upload != null) {
            upload.setUploadDirectory(uploadDirectory);
            upload.setStatus(status);
            upload.update();
        } else {
            upload = new Upload();
            upload.setAssignmentId(assignmentId);
            upload.setUserId(userId);
            upload.setUploadDirectory(uploadDirectory);
            upload.setStatus(status);
            upload.save();
        }
    }

    public void insertOrUpdate(int assignmentId, String userId, int status) {
        Upload upload = this.findById(assignmentId, userId);
        if (upload != null) {
            upload.setStatus(status);
            upload.update();
        } else {
            upload = new Upload();
            upload.setAssignmentId(assignmentId);
            upload.setUserId(userId);
            upload.setStatus(status);
            upload.save();
        }
    }

    public List<Upload> findUnEvaluate() {
        return dao.find("select * from upload where status = 1");
    }
}
