package com.ce.service;

import com.ce.model.Question;
import com.ce.model.TestCase;
import com.jfinal.plugin.activerecord.Db;

import java.util.List;

public class QuestionService {

    private static final Question questionDao = new Question().dao();

    private static final TestCase testCaseDao = new TestCase().dao();

    public Question findById(int questionId, int assignmentId) {
        return questionDao.findById(questionId, assignmentId);
    }

    public void deleteById(int questionId) {

        Db.tx(() -> {
            Db.delete("delete from test_case where questionId = ?", questionId);
            return true;
        });
        boolean result = questionDao.deleteById(questionId);
        int a = 1;

    }

    public List<Question> findByAssignmentId(int assignmentId) {
        return questionDao.find("select * from question where assignmentId = ?", assignmentId);
    }

    public Question findByAssignmentIdAndQuestionNo(int assignmentId, int questionNo) {
        return questionDao.findFirst("select * from question where assignmentId = ? and questionNo = ?", assignmentId, questionNo);
    }
}
