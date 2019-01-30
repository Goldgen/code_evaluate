package com.ce.service;

import com.ce.model.first.Question;
import com.jfinal.plugin.activerecord.Db;

import java.util.List;

public class QuestionService {

    private static final Question questionDao = new Question().dao();

    public Question findById(int questionId) {
        return questionDao.findById(questionId);
    }

    public void deleteById(int questionId) {

        Db.tx(() -> {
            Db.delete("delete from test_case where questionId = ?", questionId);
            return true;
        });
        questionDao.deleteById(questionId);

    }

    public List<Question> getAll() {
        return questionDao.find("select * from question where assignmentId");
    }

    public List<Question> findByAssignmentId(int assignmentId) {
        return questionDao.find("select * from question where assignmentId = ?", assignmentId);
    }

    public Question findByAssignmentIdAndQuestionNo(int assignmentId, int questionNo) {
        return questionDao.findFirst("select * from question where assignmentId = ? and questionNo = ?", assignmentId, questionNo);
    }
}
