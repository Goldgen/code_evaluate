package com.ce.service;


import com.ce.model.StudentQuestion;

import java.util.List;

public class StudentQuestionService {

    private static final StudentQuestion dao = new StudentQuestion().dao();

    public StudentQuestion findById(int questionId,String userId) {
        return dao.findById(questionId, userId);
    }

    public void deleteById(String id) {
        dao.deleteById(id);
    }

    public List<StudentQuestion> findByAssignmentId(int assignmentId) {
        List<StudentQuestion> studentQuestionList = dao.find("SELECT q.questionNo,sq.* FROM question q inner join student_question sq on q.questionId=sq.questionId where q.assignmentId= ? ", assignmentId);
        return studentQuestionList;
    }
}
