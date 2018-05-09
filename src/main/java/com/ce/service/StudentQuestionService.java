package com.ce.service;


import com.ce.model.first.StudentQuestion;

import java.util.List;

public class StudentQuestionService {

    private static final StudentQuestion dao = new StudentQuestion().dao();

    public StudentQuestion findById(int questionId, String userId) {
        return dao.findById(questionId, userId);
    }

    public void deleteById(String id) {
        dao.deleteById(id);
    }

    public void update(int questionId, String userId, int status) {
        StudentQuestion studentQuestion = this.findById(questionId, userId);
        if (studentQuestion != null) {
            studentQuestion.update();
        }
    }


    public List<StudentQuestion> findByAssignmentId(int assignmentId) {
        return dao.find("SELECT q.questionNo,sq.* FROM question q inner join student_question sq on q.questionId=sq.questionId where q.assignmentId= ? ", assignmentId);
    }
}
