package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.first.*;
import com.ce.model.second.Assignment;
import com.ce.service.AssignmentService;
import com.ce.service.QuestionService;
import com.ce.service.TestDbService;
import com.ce.service.TestDbTestCaseService;
import com.ce.util.CommonUtil;
import com.ce.util.CorrectUtil;
import com.ce.util.FileUtil;
import com.ce.vo.*;
import com.jfinal.core.Controller;

import java.io.IOException;
import java.util.Date;
import java.util.List;
import java.util.stream.Collectors;

public class TestDbController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static QuestionService questionService = new QuestionService();

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

    public void test_code() {
        int testId = getParaToInt("testId");
        TestDb test = testDbService.findById(testId);
        String type = getPara("type");
        if (type != null && type.equals("cpp")) {
            setAttr("type", "cpp");
        } else {
            setAttr("type", "c");
        }
        setAttr("test", test);
        render("db_code_test.html");
    }

    public void run() throws IOException, InterruptedException {
        int testId = getParaToInt("testId");
        String code = getPara("code");
        int language = getParaToInt("language");

        String testFolder = "test/";
        String suffix = language == 1 ? ".c" : ".cpp";
        String codePath = testFolder + testId + suffix;

        List<TestDbTestCase> testCaseList = testDbTestCaseService.findByTestId(testId);
        for (TestDbTestCase testCase : testCaseList) {
            String inputFilePath = testFolder + testId + "_input_" + testCase.getTestCaseId() + ".txt";
            FileUtil.createFile(inputFilePath, testCase.getTestCaseContent());
        }


        //如果不存在，则创建测试文件夹
        FileUtil.createDirectory("test");

        //创建代码文件
        FileUtil.createFile(codePath, code);

        String fileName = testId + suffix;
        String prefix = String.valueOf(testId);

        EvaluateInfoVo evaluateInfo = new EvaluateInfoVo();

        //编译
        ShellReturnInfo returnInfo = CorrectUtil.isCompilePass(testFolder, fileName);

        evaluateInfo.isCompilePass = returnInfo.isPass;
        evaluateInfo.compileErrorInfo = returnInfo.errorInfo.replace("\n", "<br>");

        if (returnInfo.isPass) {
            //执行，比较测试用例和输出
            evaluateInfo.executeInfo = "";
            double testCasePassNum = 0;
            for (TestDbTestCase testCase : testCaseList) {
                String inputFileName = testId + "_input_" + testCase.getTestCaseId() + ".txt";
                String outputFileName = testId + "_output_" + testCase.getTestCaseId() + ".txt";
                ShellReturnInfo excuteReturnInfo = CorrectUtil.execute(testFolder, prefix + ".out", "test/" + inputFileName, outputFileName);
                if (!excuteReturnInfo.isPass)
                    evaluateInfo.executeInfo = "有部分测试用例执行超时";
                String outputFilePath = testFolder + outputFileName;
                if (FileUtil.compareFileWithString(outputFilePath, testCase.getAnswer())) {
                    testCasePassNum++;
                }
            }
            int testCaseSize = testCaseList.size();

            evaluateInfo.testCasePassNum = (int) testCasePassNum;
            evaluateInfo.testCaseSize = testCaseSize;
            evaluateInfo.testCaseScore = (int) ((testCasePassNum / testCaseSize) * 100);  //以百分制显示
        }

        FileUtil.emptyDirectory(testFolder);
        String json = JSON.toJSONString(JsonResponse.ok(evaluateInfo, 1));
        renderJson(json);
    }

}
