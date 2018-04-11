package com.ce.controller;

import com.ce.model.Assignment;
import com.ce.model.Question;
import com.ce.model.TestCase;
import com.ce.model.TestDb;
import com.ce.service.AssignmentService;
import com.ce.service.QuestionService;
import com.ce.service.TestCaseService;
import com.ce.service.TestDbService;
import com.ce.util.CommonUtil;
import com.jfinal.core.Controller;

import java.util.List;
import java.util.TreeMap;
import java.util.stream.Collectors;

public class TestCaseController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static QuestionService questionService = new QuestionService();

    private static TestDbService testDbService = new TestDbService();

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

    public void addFromDb() {
        int assignmentId = getParaToInt("assignmentId");
        int questionNo = getParaToInt("questionNo");

        String content = getPara("content");
        List<TestDb> testList = testDbService.getAll();
        if (content != null && !content.isEmpty()) {
            testList = testList.stream().filter(x -> x.getContent().contains(content)).collect(Collectors.toList());
        }
        int totalCount = testList.size();
        List<List<TestDb>> result = CommonUtil.split(testList, 10); //把列表拆分成10个一组
        setAttr("totalCount", totalCount);
        setAttr("testLists", result);
        setAttr("assignmentId",assignmentId);
        setAttr("questionNo",questionNo);
        render("add_from_db.html");
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
