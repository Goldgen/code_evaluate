package com.ce.service;

import com.ce.model.first.Question;
import com.ce.model.first.TestCase;
import com.ce.vo.QuestionListVo;

import java.util.ArrayList;
import java.util.List;

public class TestCaseService {

    private static final TestCase dao = new TestCase().dao();

    private static final Question questionDao = new Question().dao();

    public TestCase findById(int id) {
        return dao.findById(id);
    }

    public void deleteById(int id) {
        dao.deleteById(id);
    }

    public List<TestCase> findByTestId(int testId) {
        return dao.find("select * from test_db_test_case where testId = ?", testId);
    }

    public List<QuestionListVo> findByAssignmentIdGroupByTestId(int assignmentId) {
        List<QuestionListVo> result = new ArrayList<>();
        List<Question> questionList = questionDao.find("select * from question where assignmentId = ? order by questionNo", assignmentId);
        for (Question question : questionList) {
            List<TestCase> testCaseList = dao.find("select * from test_case where testId = ? ", question.getTestId());
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
