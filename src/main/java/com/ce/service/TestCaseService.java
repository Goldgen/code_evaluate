package com.ce.service;

import com.ce.model.first.Question;
import com.ce.model.first.TestCase;
import com.ce.vo.QuestionListVo;

import java.util.*;

public class TestCaseService {

    private static final TestCase testCaseDao = new TestCase().dao();

    private static final Question questionDao = new Question().dao();

    public TestCase findById(int id) {
        return testCaseDao.findById(id);
    }

    public void deleteById(int id) {
        testCaseDao.deleteById(id);
    }

    public List<QuestionListVo> findByAssignmentIdGroupByquestionId(int assignmentId) {
        List<QuestionListVo> result = new ArrayList<>();
        List<Question> questionList = questionDao.find("select * from question where assignmentId = ? order by questionNo", assignmentId);
        for (Question question : questionList) {
            List<TestCase> testCaseList = testCaseDao.find("select * from test_case where questionId = ? ", question.getQuestionId());
            QuestionListVo vo = new QuestionListVo();
            vo.questionId = question.getQuestionId();
            vo.questionNo = question.getQuestionNo();
            vo.content = question.getContent();
            vo.testCaseList = testCaseList;
            result.add(vo);
        }
        return result;
    }


}
