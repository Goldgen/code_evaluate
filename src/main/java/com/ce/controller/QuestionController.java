package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.config.MyConstants;
import com.ce.model.first.Question;
import com.ce.model.first.TestCase;
import com.ce.model.first.TestDb;
import com.ce.model.first.TestDbTestCase;
import com.ce.model.second.Assignment;
import com.ce.service.*;
import com.ce.util.CommonUtil;
import com.ce.util.FileUtil;
import com.ce.vo.QuestionInfoVo;
import com.ce.vo.QuestionListVo;
import com.jfinal.core.Controller;
import com.jfinal.plugin.activerecord.Db;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

public class QuestionController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static QuestionService questionService = new QuestionService();

    private static TestDbService testDbService = new TestDbService();

    private static TestDbTestCaseService testDbTestCaseService = new TestDbTestCaseService();

    public void index() {
        int assignmentId = getParaToInt(0);
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
        setAttr("questionSize", questionVoList.size());
        setAttr("questionVoList", questionVoList);
        render("test_case_edit.html");
    }

    public void addQuestion() {
        int assignmentId = getParaToInt("assignmentId");
        int questionNo = getParaToInt("questionNo");
        String content = getPara("content");
        Question question = new Question();
        question.setAssignmentId(assignmentId);
        question.setQuestionNo(questionNo);
        question.setContent(content);
        question.save();

        redirect("/question/" + assignmentId);
    }

    public void addQuestionFromDb() {
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

    public void batchAddQuestion() {

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

        redirect("/question/" + assignmentId);
    }

    public void deleteQuestion() {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");

        questionService.deleteById(questionId);

        List<Question> questionList = questionService.findByAssignmentId(assignmentId);

        questionList.sort(Comparator.comparing(Question::getQuestionNo));
        for (int i = 1; i <= questionList.size(); i++) {
            Question question = questionList.get(i - 1);
            question.setQuestionNo(i);
            question.update();
        }

        redirect("/question/" + assignmentId);
    }

    public void addTestCase() {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");
        String content = getPara("content");
        String answer = getPara("answer");

        TestCase testCase = new TestCase();
        testCase.setQuestionId(questionId);
        testCase.setTestCaseContent(content);
        testCase.setAnswer(answer);
        testCase.save();

        redirect("/question/" + assignmentId);
    }

    public void editTestCase() {
        int assignmentId = getParaToInt("assignmentId");
        String content = getPara("content");
        String answer = getPara("answer");

        int testCaseId = getParaToInt("testCaseId");
        TestCase testCase = testCaseService.findById(testCaseId);
        testCase.setTestCaseContent(content);
        testCase.setAnswer(answer);
        testCase.update();

        redirect("/question/" + assignmentId);
    }

    public void deleteTestCase() {
        int assignmentId = getParaToInt("assignmentId");
        int testCaseId = getParaToInt("testCaseId");
        testCaseService.deleteById(testCaseId);

        redirect("/question/" + assignmentId);
    }

    public void finish() throws IOException {
        int assignmentId = getParaToInt("assignmentId");

        Assignment assignment = assignmentService.findById(assignmentId);

        String unionFolderName = assignment.getUploadDirectory();
        String assignmentDirectoryPath;

        if (unionFolderName.isEmpty()) {
            unionFolderName = FileUtil.generateFolderName();
            assignmentDirectoryPath = MyConstants.uploadPath + unionFolderName + "/";
            FileUtil.createDirectory(MyConstants.uploadPath + unionFolderName + "/");
            assignmentService.update(assignmentId, unionFolderName);
        } else {
            assignmentDirectoryPath = MyConstants.uploadPath + unionFolderName + "/";
        }


        //创建测试用例文件
        List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
        for (QuestionListVo vo : questionVoList) {
            for (TestCase testCase : vo.testCaseList) {
                String inputFilePath = assignmentDirectoryPath + vo.questionNo + "_input_" + testCase.getTestCaseId() + ".txt";
                FileUtil.addTxtFile(inputFilePath, testCase.getTestCaseContent());
            }
        }

        redirect("/question/" + assignmentId);
    }


}
