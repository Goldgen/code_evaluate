package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.first.*;
import com.ce.model.second.Assignment;
import com.ce.model.second.Class;
import com.ce.model.first.Topic;
import com.ce.service.*;
import com.ce.util.CommonUtil;
import com.ce.util.CorrectUtil;
import com.ce.util.FileUtil;
import com.ce.util.TestVo;
import com.ce.vo.*;
import com.jfinal.core.Controller;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.stream.Collectors;

public class TestDbController extends Controller {

    private static ClassService classService = new ClassService();

    private static AssignmentService assignmentService = new AssignmentService();

    private static QuestionService questionService = new QuestionService();

    private static TestDbService testDbService = new TestDbService();

    private static TestDbTestCaseService testDbTestCaseService = new TestDbTestCaseService();

    private static TopicService topicService = new TopicService();

    public void list() {
        String userId = getSessionAttr("userId", "");

        List<Class> classList;
        String classIdStr = getSessionAttr("classIdList", "");
        List<String> classIdList = JSON.parseArray(classIdStr, String.class);
        if (classIdList != null && !classIdList.isEmpty()) {
            classList = classService.findByClassIdList(classIdList);
        } else {
            classList = classService.findAllByTeacherId(userId);
        }
        List<String> courseIdList = new ArrayList<>();
        List<CourseInfoVo> courseInfoVoList = classList.stream().map(x -> {
            CourseInfoVo vo = new CourseInfoVo();
            vo.courseId = x.getCourseId();
            vo.courseName = x.getStr("courseName");
            return vo;
        }).filter(x -> {
            boolean flag = !courseIdList.contains(x.courseId);
            courseIdList.add(x.courseId);
            return flag;
        }).collect(Collectors.toList());


        List<Topic> topicList = topicService.getAll();

        setAttr("courseList", courseInfoVoList);
        setAttr("topicList", topicList);
        render("test_db.html");
    }

    public void search() {
        String userId = getSessionAttr("userId", "");
        String content = getPara("content");
        int topicId = getParaToInt("topicId");
        String courseId = getPara("courseId");
        int difficulty = getParaToInt("difficulty");
        int pageCount = getParaToInt("pageCount");
        int pageSize = getParaToInt("pageSize");

        int i = pageCount;
        List<TestVo> testList = new ArrayList<>();
        for (; i > 0; i--) {
            testList = testDbService.getByConditionAndPage(i, pageSize, courseId, topicId, difficulty, content).stream().
                    map(x -> {
                        TestVo vo = new TestVo();
                        vo.testId = x.getTestId();
                        vo.courseId = x.getCourseId();
                        vo.topicId = x.getTopicId();
                        vo.topicName = x.getStr("topicName");
                        vo.testName = x.getTestName();
                        vo.difficulty = x.getDifficulty();
                        vo.content = x.getContent();
                        return vo;
                    }).collect(Collectors.toList());
            if (testList.size() > 0) break;
        }

        int totalCount = testDbService.countByCondition(courseId, topicId, difficulty, content);

        setAttr("pageCount", i == 0 ? 1 : i);
        setAttr("pageSize", pageSize);
        setAttr("totalCount", totalCount);
        setAttr("testList", testList);
        render("_test_db_table.html");
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

    public void topicList() {
        List<Topic> topicList = topicService.getAll();
        setAttr("topicList", topicList);
        render("topic.html");
    }

    public void addTopic() {
        String topicName = getPara("topicName");

        Topic topic = new Topic();
        topic.setTopicName(topicName);
        topic.save();

        redirect("/testDb/topicList");
    }

    public void editTopic() {
        int topicId = getParaToInt("topicId");
        String topicName = getPara("topicName");

        Topic topic = topicService.findById(topicId);
        topic.setTopicName(topicName);
        topic.update();

        redirect("/testDb/topicList");
    }

    public void deleteTopic() {
        int topicId = getParaToInt("topicId");

        Topic topic = topicService.findById(topicId);
        topic.delete();

        redirect("/testDb/topicList");
    }
}
