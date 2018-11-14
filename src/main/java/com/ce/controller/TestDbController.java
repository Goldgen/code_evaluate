package com.ce.controller;

import com.ce.model.first.TestDb;
import com.ce.model.first.TestDbTestCase;
import com.ce.service.TestDbService;
import com.ce.service.TestDbTestCaseService;
import com.ce.util.CommonUtil;
import com.jfinal.core.Controller;

import java.util.List;
import java.util.stream.Collectors;

public class TestDbController extends Controller {

    private static TestDbService testDbService = new TestDbService();

    private static TestDbTestCaseService testDbTestCaseService = new TestDbTestCaseService();

    public void list() {
        String content = getPara("content");
        List<TestDb> testList = testDbService.getAll();
        if (content != null && !content.isEmpty()) {
            testList = testList.stream().filter(x -> x.getContent().contains(content)).collect(Collectors.toList());
        }
        int totalCount = testList.size();
        List<List<TestDb>> result = CommonUtil.split(testList, 10); //把列表拆分成10个一组
        setAttr("totalCount", totalCount);
        setAttr("testLists", result);
        render("test_db_edit.html");
    }

    public void addTest() {
        String content = getPara("content");
        TestDb test = new TestDb();
        test.setContent(content);
        test.save();
        redirect("/testDb/list");
    }

    public void editTest() {
        int testId = getParaToInt("testId");
        String content = getPara("content");
        TestDb test = testDbService.findById(testId);
        test.setContent(content);
        test.update();
        redirect("/testDb/list");
    }

    public void deleteTest() {
        int testId = getParaToInt("testId");
        testDbService.deleteById(testId);
        redirect("/testDb/list");
    }


    public void caseList() {
        int testId = getParaToInt("testId");
        List<TestDbTestCase> testCaseList = testDbTestCaseService.findByTestId(testId);
        setAttr("testId", testId);
        setAttr("testCaseList", testCaseList);
        render("test_db_test_case_edit.html");
    }

    public void addCase() {
        int testId = getParaToInt("testId");
        String content = getPara("content");
        String answer = getPara("answer");

        TestDbTestCase testCase = new TestDbTestCase();
        testCase.setTestId(testId);
        testCase.setTestCaseContent(content.replaceAll("\r\n", "\n"));
        testCase.setAnswer(answer.replaceAll("\r\n", "\n"));
        testCase.save();

        redirect("/testDb/caseList?testId=" + testId);
    }

    public void editCase() {
        int testId = getParaToInt("testId");
        int testCaseId = getParaToInt("testCaseId");
        String content = getPara("content");
        String answer = getPara("answer");


        TestDbTestCase testCase = testDbTestCaseService.findById(testCaseId);
        testCase.setTestCaseContent(content.replaceAll("\r\n", "\n"));
        testCase.setAnswer(answer.replaceAll("\r\n", "\n"));
        testCase.update();

        redirect("/testDb/caseList?testId=" + testId);
    }

    public void deleteCase() {
        int testId = getParaToInt("testId");
        int testCaseId = getParaToInt("testCaseId");
        testDbTestCaseService.deleteById(testCaseId);

        redirect("/testDb/caseList?testId=" + testId);
    }

}
