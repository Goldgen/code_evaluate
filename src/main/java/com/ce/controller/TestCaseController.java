package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.*;
import com.ce.service.*;
import com.ce.util.CommonUtil;
import com.ce.vo.QuestionInfoVo;
import com.jfinal.core.Controller;
import com.jfinal.plugin.activerecord.Db;

import java.util.ArrayList;
import java.util.List;
import java.util.TreeMap;
import java.util.stream.Collectors;

public class TestCaseController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static QuestionService questionService = new QuestionService();

    private static TestDbService testDbService = new TestDbService();

    private static TestDbTestCaseService testDbTestCaseService = new TestDbTestCaseService();

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
        setAttr("assignmentId", assignmentId);
        setAttr("questionNo", questionNo);
        render("add_from_db.html");
    }

    public void batchAdd() {

        int assignmentId = getParaToInt("assignmentId");
        String testIdListJson = getPara("questionInfoList");
        List<QuestionInfoVo> infoList = JSON.parseArray(testIdListJson, QuestionInfoVo.class);
        List<TestDb> testList = testDbService.findByIds(infoList.stream().map(x -> x.testId).collect(Collectors.toList()));
        for (TestDb test : testList) {
            Question question = new Question();
            question.setAssignmentId(assignmentId);
            infoList.stream().filter(x -> x.testId == test.getTestId()).findFirst().ifPresent(tempInfo -> question.setQuestionNo(tempInfo.questionNo));
            question.setContent(test.getContent());
            question.save();
            List<TestDbTestCase> testDbTestCaseList = testDbTestCaseService.findByTestId(test.getTestId());
            List<TestCase> testCaseList = new ArrayList<>();
            for (TestDbTestCase testDbTestCase : testDbTestCaseList) {
                TestCase testCase = new TestCase();
                testCase.setQuestionId(question.getQuestionId());
                testCase.setTestCaseContent(testDbTestCase.getTestCaseContent());
                testCase.setAnswer(testDbTestCase.getAnswer());
                testCaseList.add(testCase);
            }
            Db.batchSave(testCaseList, 1000);
        }

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
