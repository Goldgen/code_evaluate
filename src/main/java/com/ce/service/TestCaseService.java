package com.ce.service;

import com.ce.model.Question;
import com.ce.model.TestCase;
import com.ce.model.base.BaseTestCase;
import com.ce.vo.QuestionListVo;

import java.util.*;
import java.util.stream.Collectors;

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
        List<Question> questionList = questionDao.find("select * from question where assignmentId = ? order by questionId", assignmentId);
        for (Question question : questionList) {
            List<TestCase> testCaseList = testCaseDao.find("select * from test_case where questionId = ? ", question.getQuestionId());
            QuestionListVo vo = new QuestionListVo();
            vo.questionId = question.getQuestionId();
            vo.testCaseList = testCaseList;
            result.add(vo);
        }
        return result;
    }


}
