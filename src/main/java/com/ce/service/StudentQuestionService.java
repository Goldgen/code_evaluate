package com.ce.service;


import com.ce.model.first.Question;
import com.ce.model.first.StudentQuestion;
import com.ce.vo.QuestionResultVo;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class StudentQuestionService {

    private static final Question questionDao = new Question().dao();

    private static final StudentQuestion studentQuestionDao = new StudentQuestion().dao();

    public StudentQuestion findById(int questionId, String userId) {
        return studentQuestionDao.findById(questionId, userId);
    }

    public void deleteById(String id) {
        studentQuestionDao.deleteById(id);
    }

    public void update(int questionId, String userId, int status) {
        StudentQuestion studentQuestion = this.findById(questionId, userId);
        if (studentQuestion != null) {
            studentQuestion.update();
        }
    }

    //根据两个参数找到所有问题，并找到对应问题的代码批改情况
    public List<QuestionResultVo> findByAssignmentIdAndUserId(int assignmentId, String userId) {
        List<Question> questionList = questionDao.find("select * from question where assignmentId = ?", assignmentId);
        String questionIdListStr = "(";
        List<Integer> questionIdList = questionList.stream().map(Question::getQuestionId).collect(Collectors.toList());
        if (questionIdList.isEmpty()) return new ArrayList<>();

        for (int id : questionIdList) {
            if (id == questionIdList.get(questionIdList.size() - 1)) {
                questionIdListStr += id + ")";
            } else {
                questionIdListStr += id + ",";
            }
        }
        List<StudentQuestion> studentQuestionList = studentQuestionDao.find("select  * from student_question where userId = ? and questionId in " + questionIdListStr, userId);
        List<QuestionResultVo> voList = new ArrayList<>();
        for (Question question : questionList) {
            int questionId = question.getQuestionId();
            QuestionResultVo vo = new QuestionResultVo();
            vo.questionId = question.getQuestionId();
            vo.questionNo = question.get("questionNo");
            vo.content = question.get("content");
            StudentQuestion studentQuestion = studentQuestionList.stream().filter(x -> x.getQuestionId() == questionId).findFirst().orElse(null);
            if (studentQuestion == null) {
                vo.totalScore = -1;
            } else {
                vo.totalScore = studentQuestion.getTestCaseScore() + studentQuestion.getEvaluationScore();
            }
            voList.add(vo);
        }
        return voList;
    }


    public List<StudentQuestion> findByAssignmentId(int assignmentId) {
        return studentQuestionDao.find("SELECT q.questionNo, q.questionId,sq.* FROM question q inner join student_question sq on q.questionId=sq.questionId where q.assignmentId= ? ", assignmentId);
    }
}
