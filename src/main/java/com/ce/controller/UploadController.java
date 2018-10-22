package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.first.Question;
import com.ce.model.first.StudentQuestion;
import com.ce.model.first.TestCase;
import com.ce.model.first.Violation;
import com.ce.model.second.Assignment;
import com.ce.service.AssignmentService;
import com.ce.service.QuestionService;
import com.ce.service.StudentQuestionService;
import com.ce.service.TestCaseService;
import com.ce.util.CorrectUtil;
import com.ce.util.FileUtil;
import com.ce.vo.*;
import com.jfinal.core.Controller;
import org.apache.commons.lang3.StringUtils;
import org.apache.commons.lang3.time.DateFormatUtils;

import java.io.IOException;
import java.util.Calendar;
import java.util.Date;
import java.util.List;

public class UploadController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static QuestionService questionService = new QuestionService();

    private static StudentQuestionService studentQuestionService = new StudentQuestionService();

    private static TestCaseService testCaseService = new TestCaseService();

    public void index() {
        int assignmentId = getParaToInt(0);
        String userId = getSessionAttr("userId");
        Assignment assignment = assignmentService.findById(assignmentId);
        Calendar cal = Calendar.getInstance();
        cal.set(Calendar.HOUR_OF_DAY, 0);
        cal.set(Calendar.SECOND, 0);
        cal.set(Calendar.MINUTE, 0);
        cal.set(Calendar.MILLISECOND, 0);
        setAttr("isExpired", assignment.getEndDate().compareTo(new Date(cal.getTimeInMillis())) < 0);
        setAttr("assignment", assignment);

        List<QuestionResultVo> questionResultVoList = studentQuestionService.findByAssignmentIdAndUserId(assignmentId, userId);
        setAttr("questionResultVoList", questionResultVoList);
        render("code_upload.html");
    }

    public void edit() {
        int assignmentId = getParaToInt("assignmentId");
        int questionId = getParaToInt("questionId");
        String type = getPara("type");
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        Question question = questionService.findById(questionId);
        setAttr("question", question);
        if (type != null && type.equals("cpp")) {
            setAttr("type", "cpp");
        } else {
            setAttr("type", "c");
        }
        render("code_edit.html");
    }

    public void run() throws IOException, InterruptedException {
        int assignmentId = getParaToInt("assignmentId");
        Assignment assignment = assignmentService.findById(assignmentId);
        if (!assignment.getIsCaseEditFinish()) {
            renderJson(JSON.toJSONString(JsonResponse.ok(2)));
            return;
        }

        int questionId = getParaToInt("questionId");
        String code = getPara("code");
        int language = getParaToInt("language");
        String stuNum = getSessionAttr("userId");

        String suffix = language == 1 ? ".c" : ".cpp";
        String deleteSuffix = language != 1 ? ".c" : ".cpp";


        Question question = questionService.findById(questionId);

        String unionFolderName = assignment.getUploadDirectory();

        String studentDirectoryPath = unionFolderName + "/" + getSessionAttr("userId") + "/";
        String codePath = studentDirectoryPath + question.getQuestionNo() + suffix;

        String deleteCodePath = studentDirectoryPath + question.getQuestionNo() + deleteSuffix;

        //创建学号文件夹
        FileUtil.createDirectory(studentDirectoryPath);

        //删除以前提交的代码
        FileUtil.deleteFile(codePath);
        FileUtil.deleteFile(deleteCodePath);

        //创建代码文件
        FileUtil.createFile(codePath, code);

        String fileName = question.getQuestionNo() + suffix;
        String prefix = question.getQuestionNo().toString();

        EvaluateInfoVo evaluateInfo = new EvaluateInfoVo();

        boolean alreadyExist = studentQuestionService.findById(questionId, stuNum) != null;
        //编译
        ShellReturnInfo returnInfo = CorrectUtil.isCompilePass(studentDirectoryPath, fileName);

        evaluateInfo.isCompilePass = returnInfo.isPass;
        evaluateInfo.compileErrorInfo = returnInfo.errorInfo.replace("\n", "<br>");

        if (!returnInfo.isPass) {
            StudentQuestion studentQuestion = new StudentQuestion();
            studentQuestion.setUserId(stuNum);
            studentQuestion.setQuestionId(questionId);
            studentQuestion.setIsCompilePass(false);
            studentQuestion.setCompileErrorInfo(returnInfo.errorInfo);
            studentQuestion.setCodePath(codePath);
            if (alreadyExist) {
                studentQuestion.update();
            } else {
                studentQuestion.save();
            }
        } else {
            List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);

            List<TestCase> testCaseList = questionVoList.stream().filter(x -> x.questionId == questionId)
                    .findFirst().orElse(new QuestionListVo()).testCaseList;

            //执行，比较测试用例和输出
            System.out.println("正在执行学号" + stuNum + " 第" + questionId + "题文件");
            evaluateInfo.executeInfo = "";
            double testCasePassNum = 0;
            for (TestCase testCase : testCaseList) {
                String inputFileName = question.getQuestionNo() + "_input_" + testCase.getTestCaseId() + ".txt";
                String outputFileName = question.getQuestionNo() + "_output_" + testCase.getTestCaseId() + ".txt";
                ShellReturnInfo excuteReturnInfo = CorrectUtil.execute(studentDirectoryPath, prefix + ".out", inputFileName, outputFileName);
                if (!excuteReturnInfo.isPass)
                    evaluateInfo.executeInfo = "有部分测试用例执行超时";
                String outputFilePath = studentDirectoryPath + "/" + outputFileName;
                if (FileUtil.compareFileWithString(outputFilePath, testCase.getAnswer())) {
                    testCasePassNum++;
                }
            }
            int testCaseSize = testCaseList.size();
            int testCaseScore = (int) ((testCasePassNum / testCaseSize) * 80);

            evaluateInfo.testCasePassNum = (int) testCasePassNum;
            evaluateInfo.testCaseSize = testCaseSize;
            evaluateInfo.testCaseScore = (int) ((testCasePassNum / testCaseSize) * 100);  //以百分制显示


            //静态分析
            System.out.println("正在分析学号" + stuNum + " 第" + question.getQuestionNo() + "题文件");
            String resultFileName = prefix + "_result.json";
            CorrectUtil.evaluate(studentDirectoryPath, fileName, resultFileName);
            String evaluateFilePath = studentDirectoryPath + "/" + question.getQuestionNo() + "_result.json";
            String json = FileUtil.readFile(evaluateFilePath);
            OclintInfoVo info = JSON.parseObject(json, OclintInfoVo.class);

            double evaluationScore = 100;
            for (Violation violation : info.violation) {
                switch (violation.getPriority()) {
                    case 1:
                        evaluationScore = evaluationScore - 5;
                        break;
                    case 2:
                        evaluationScore = evaluationScore - 2;
                        break;
                    case 3:
                        evaluationScore = evaluationScore - 1;
                        break;
                    default:
                        break;
                }
            }

            evaluationScore = evaluationScore < 0 ? 0 : evaluationScore;
            evaluateInfo.evaluationScore = (int) evaluationScore; //以百分制显示
            evaluateInfo.violationList = info.violation;

            StudentQuestion studentQuestion = new StudentQuestion();
            studentQuestion.setUserId(stuNum);
            studentQuestion.setQuestionId(questionId);
            studentQuestion.setIsCompilePass(true);
            studentQuestion.setCompileErrorInfo("");
            studentQuestion.setTestCaseScore(testCaseScore);
            studentQuestion.setTestCasePassNum((int) testCasePassNum);
            studentQuestion.setEvaluationScore((int) ((evaluationScore / 100) * 20));  //存入数据库时是20分制
            studentQuestion.setCodePath(codePath);
            if (alreadyExist) {
                studentQuestion.update();
            } else {
                studentQuestion.save();
            }
        }

        String json = JSON.toJSONString(JsonResponse.ok(evaluateInfo, 1));
        renderJson(json);

    }

    public void codeView() throws IOException {
        int questionId = getParaToInt("questionId");
        String stuNum = getSessionAttr("userId");
        StudentQuestion studentQuestion = studentQuestionService.findById(questionId, stuNum);
        String codePath = studentQuestion == null ? "" : studentQuestion.getCodePath();
        if (StringUtils.isEmpty(codePath)) {
            renderJson(JSON.toJSONString(JsonResponse.ok("代码未上传", -1)));
            return;
        }
        String code = null;
        try {
            code = FileUtil.readFile(codePath);
        } catch (IOException e) {
            renderJson(JSON.toJSONString(JsonResponse.ok("代码读取出错", -1)));
            return;
        }
        if (codePath.endsWith(".cpp")) {
            renderJson(JSON.toJSONString(JsonResponse.ok(code, 2)));
        } else {
            renderJson(JSON.toJSONString(JsonResponse.ok(code, 1)));
        }

    }


}
