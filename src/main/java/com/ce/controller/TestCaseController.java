package com.ce.controller;

import com.ce.model.Assignment;
import com.ce.model.Question;
import com.ce.model.TestCase;
import com.ce.service.AssignmentService;
import com.ce.service.QuestionService;
import com.ce.service.TestCaseService;
import com.jfinal.core.Controller;

import java.util.List;
import java.util.TreeMap;

public class TestCaseController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static QuestionService questionService = new QuestionService();

    public void addQuestion() {
        int assignmentId = getParaToInt("assignmentId");
        int questionNo = getParaToInt("questionNo");
        String content = getPara("content");
        Question question = new Question();
        question.setAssignmentId(assignmentId);
        question.setQuestionNo(questionNo);
        question.setContent(content);
        question.save();

        redirect("/assignment/detail/" + assignmentId + "-test_case_edit");
    }

    public void deleteQuestion() {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");

        questionService.deleteById(questionId);

        redirect("/assignment/detail/" + assignmentId + "-test_case_edit");
    }

    public void add() {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");
        String content = getPara("content");
        String answer = getPara("answer");

        TestCase testCase = new TestCase();
        testCase.setQuestionId(questionId);
        testCase.setTestCaseContent(content);
        testCase.setAnswer(answer);
        testCase.save();

        redirect("/assignment/detail/" + assignmentId + "-test_case_edit");
    }

    public void edit() {
        int assignmentId = getParaToInt("assignmentId");
        String content = getPara("content");
        String answer = getPara("answer");

        int testCaseId = getParaToInt("testCaseId");
        TestCase testCase = testCaseService.findById(testCaseId);
        testCase.setTestCaseContent(content);
        testCase.setAnswer(answer);
        testCase.update();

        redirect("/assignment/detail/" + assignmentId + "-test_case_edit");
    }

    public void delete() {
        int assignmentId = getParaToInt("assignmentId");
        int testCaseId = getParaToInt("testCaseId");
        testCaseService.deleteById(testCaseId);

        redirect("/assignment/detail/" + assignmentId + "-test_case_edit");
    }


}
