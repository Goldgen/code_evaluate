package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.first.Question;
import com.ce.model.first.StudentQuestion;
import com.ce.model.first.TestCase;
import com.ce.model.first.Upload;
import com.ce.model.second.Assignment;
import com.ce.model.second.User;
import com.ce.service.*;
import com.ce.util.CompileUtil;
import com.ce.util.ExcelUtil;
import com.ce.util.FileUtil;
import com.ce.vo.*;
import com.jfinal.core.ActionKey;
import com.jfinal.core.Controller;
import org.apache.commons.lang3.StringUtils;

import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Collectors;

public class ResultViewController extends Controller {

    private static AssignmentService assignmentService = new AssignmentService();

    private static UploadService uploadService = new UploadService();

    private static QuestionService questionService = new QuestionService();

    private static UserService userService = new UserService();

    private static StudentQuestionService studentQuestionService = new StudentQuestionService();

    private static TestCaseService testCaseService = new TestCaseService();

    private static ViolationService violationService = new ViolationService();
    private static SimilarityService similarityService = new SimilarityService();

    @ActionKey("/execute")
    public void executeResult() {
        int assignmentId = getParaToInt(0);

        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);

        String userId = getSessionAttr("userId", "");
        String userType = getSessionAttr("userType", "student");
        if (userType.equals("student")) {
            Upload upload = uploadService.findById(assignmentId, userId);
            setAttr("executeResult", getSingleExecuteResult(assignmentId, userId));
            setAttr("upload", upload);
            render("student_execute_result.html");
        } else {
            List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId);
            setAttr("executeResultVoList", executeResultVoList);
            render("execute_result.html");
        }
    }

    public void codeView() {
        int questionId = getParaToInt("questionId");
        String userId = getPara("userId");
        StudentQuestion studentQuestion = studentQuestionService.findById(questionId, userId);
        String codePath = studentQuestion.getCodePath();
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

    public void caseResult() {
        int questionId = getParaToInt("questionId");
        String userId = getPara("userId");
        Question question = questionService.findById(questionId);
        Assignment assignment = assignmentService.findById(question.getAssignmentId());
        String studentDirectoryPath = assignment.getUploadDirectory() + "/" + userId + "/";
        int questionNo = question.getQuestionNo();

        List<TestCase> testCaseList = testCaseService.findByQuestionId(questionId);
        List<TestCaseVo> testCaseVoList = new ArrayList<>();
        try {
            for (TestCase testCase : testCaseList) {
                TestCaseVo vo = new TestCaseVo();
                vo.content = testCase.getTestCaseContent();
                vo.answer = testCase.getAnswer();
                String outputFileName = questionNo + "_output_" + testCase.getTestCaseId() + ".txt";
                vo.output = FileUtil.readFile(studentDirectoryPath + outputFileName);
                vo.isPass = FileUtil.compareFileWithString(studentDirectoryPath + outputFileName, testCase.getAnswer());
                testCaseVoList.add(vo);
            }
        } catch (IOException e) {
            setAttr("isError", true);
            render("test_case_result.html");
            return;
        }
        setAttr("question", question);
        setAttr("testCaseVoList", testCaseVoList);
        render("test_case_result.html");

    }

    @ActionKey("/similarity")
    public void similarityResult() {
        int assignmentId = getParaToInt(0);
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        List<Question> questionList = questionService.findByAssignmentId(assignmentId);
        setAttr("questionList", questionList);
        render("similarity_analysis.html");
    }

    public void packCode() throws IOException, InterruptedException {
        int assignmentId = getParaToInt("assignmentId");
        Assignment assignment = assignmentService.findById(assignmentId);
        String filePath = assignment.getUploadDirectory();
        String unionName = FileUtil.generateFolderName();
        String copyFilePath = unionName;
        CompileUtil.zip(filePath, copyFilePath, unionName);
        renderFile(unionName + ".zip");
        //FileUtil.deleteFile(unionName + ".zip");
    }

    @ActionKey("/analysis")
    public void analysis() throws IOException, InterruptedException {
        int assignmentId = getParaToInt(0);

        Assignment assignment = assignmentService.findById(assignmentId);
        List<Question> questionList = questionService.findByAssignmentId(assignmentId);
        String unionFolderName = assignment.getUploadDirectory();
        List<FileInfo> fileInfoList = FileUtil.getSubDirectoryAndFile(unionFolderName);

        List<String> stuNumList = fileInfoList.stream().map(x -> x.fatherDirectory).distinct().collect(Collectors.toList());

        List<User> userList = userService.findByIds(stuNumList);

        List<FileInfo> cfileInfoList = fileInfoList.stream().filter(x -> x.suffix.equals("c")).collect(Collectors.toList());
        List<FileInfo> cppfileInfoList = fileInfoList.stream().filter(x -> x.suffix.equals("cpp")).collect(Collectors.toList());

        Map<String, List<FileInfo>> cfileInfoListHashByQuestionNo = cfileInfoList.stream().collect(Collectors.groupingBy(x -> x.prefix));
        Map<String, List<FileInfo>> cppfileInfoListHashByQuestionNo = cppfileInfoList.stream().collect(Collectors.groupingBy(x -> x.prefix));

        List<SimilarityResultVo> similarityResultVoList = new ArrayList<>();

        for (Question question : questionList) {
            List<SimilarityVo> similarityVoList = new ArrayList<>();
            String questionNoStr = question.getQuestionNo().toString();
            StringBuilder cFileStr = new StringBuilder();
            StringBuilder cppFileStr = new StringBuilder();
            List<FileInfo> cList = cfileInfoListHashByQuestionNo.get(questionNoStr);
            List<FileInfo> cppList = cppfileInfoListHashByQuestionNo.get(questionNoStr);
            if (cList != null) {
                for (FileInfo fileInfo : cList) {
                    cFileStr.append(" ./").append(fileInfo.fatherDirectory).append("/").append(fileInfo.fileName);
                }
            }
            if (cppList != null) {
                for (FileInfo fileInfo : cppList) {
                    cppFileStr.append(" ./").append(fileInfo.fatherDirectory).append("/").append(fileInfo.fileName);
                }
            }

            CompileUtil.similarityTest(unionFolderName, question.getQuestionNo(), cFileStr.toString(), "c");
            CompileUtil.similarityTest(unionFolderName, question.getQuestionNo(), cppFileStr.toString(), "cpp");
            String cContent = FileUtil.readFile(unionFolderName + "/similarity" + questionNoStr + "_c.txt");
            String cppContent = FileUtil.readFile(unionFolderName + "/similarity" + questionNoStr + "_cpp.txt");
            String cPattern = "\\./(.*?)/" + questionNoStr + "\\.c consists for (.*?) % of \\./(.*?)/" + questionNoStr + "\\.c";
            String cppPattern = "\\./(.*?)/" + questionNoStr + "\\.cpp consists for (.*?) % of \\./(.*?)/" + questionNoStr + "\\.cpp";

            getSimilarityResult(cContent, cPattern, similarityVoList, userList);
            getSimilarityResult(cppContent, cppPattern, similarityVoList, userList);

            SimilarityResultVo similarityResultVo = new SimilarityResultVo();
            similarityResultVo.questionId = question.getQuestionId();
            similarityResultVo.questionNo = question.getQuestionNo();
            similarityResultVo.lowSimilarityVoList = similarityVoList
                    .stream().filter(x -> x.similarity > 10 && x.similarity <= 30).collect(Collectors.toList());
            similarityResultVo.mediumSimilarityVoList = similarityVoList
                    .stream().filter(x -> x.similarity > 30 && x.similarity <= 50).collect(Collectors.toList());
            similarityResultVo.highSimilarityVoList = similarityVoList
                    .stream().filter(x -> x.similarity > 50).collect(Collectors.toList());
            similarityResultVoList.add(similarityResultVo);
        }

        Collections.sort(similarityResultVoList);

        setAttr("similarityResultVoList", similarityResultVoList);

        render("_similarity_result.html");
    }

    private void getSimilarityResult(String content, String regexStr, List<SimilarityVo> similarityVoList, List<User> userList) {
        Pattern pattern = Pattern.compile(regexStr);
        Matcher matcher = pattern.matcher(content);
        while (matcher.find()) {
            String studentId1 = matcher.group(1);
            String studentId2 = matcher.group(3);
            SimilarityVo test = similarityVoList.stream()
                    .filter(x -> x.userId2.equals(studentId1) && x.userId1.equals(studentId2))
                    .findFirst().orElse(null);
            if (test != null) {
                int newSimilarity = Integer.parseInt(matcher.group(2));
                if (test.similarity < newSimilarity)
                    test.similarity = newSimilarity;
            } else {
                SimilarityVo vo = new SimilarityVo();
                vo.userId1 = matcher.group(1);
                vo.userId2 = matcher.group(3);
                User user1 = userList.stream().filter(x -> x.getUserId().equals(matcher.group(1))).findFirst().orElse(null);
                User user2 = userList.stream().filter(x -> x.getUserId().equals(matcher.group(3))).findFirst().orElse(null);
                vo.userName1 = user1 == null ? "" : user1.getUserName();
                vo.userName2 = user2 == null ? "" : user2.getUserName();
                vo.similarity = Integer.parseInt(matcher.group(2));
                similarityVoList.add(vo);
            }
        }
    }


    public void allExcel() {
        int assignmentId = getParaToInt("assignmentId");
        List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId);
        HttpServletResponse response = getResponse();
        String fileName = "作业" + assignmentId + "成绩表";
        List<String> headList = new ArrayList<>();
        headList.add("学号");
        headList.add("姓名");
        headList.add("测试用例得分");
        headList.add("静态分析得分");
        headList.add("总分");
        List<Map<String, Object>> dataList = new ArrayList<>();
        for (ExecuteResultVo vo : executeResultVoList) {
            Map<String, Object> temp = new HashMap<>();
            temp.put("学号", vo.studentId);
            temp.put("姓名", vo.studentName);
            temp.put("测试用例得分", vo.testCaseScore);
            temp.put("静态分析得分", vo.evaluateScore);
            temp.put("总分", vo.score);
            dataList.add(temp);
        }
        ExcelUtil.exportXlsx(response, fileName, headList, dataList);
        renderNull();
    }

    public void singleExcel() {
        int assignmentId = getParaToInt("assignmentId");
        String studentId = getPara("studentId");
        ExecuteResultVo executeResultVo = getCompleteExecuteResult(assignmentId)
                .stream().filter(x -> x.studentId.equals(studentId)).findFirst().orElse(null);
        HttpServletResponse response = getResponse();
        String fileName = "作业" + assignmentId + "学号" + studentId + "成绩表";
        List<String> headList = new ArrayList<>();
        headList.add("题号");
        headList.add("是否编译通过");
        headList.add("测试用例得分");
        headList.add("静态分析得分");
        List<Map<String, Object>> dataList = new ArrayList<>();
        if (executeResultVo != null) {
            for (QuestionResultVo vo : executeResultVo.questionResultList) {
                Map<String, Object> temp = new HashMap<>();
                temp.put("题号", vo.questionNo);
                temp.put("是否编译通过", vo.isCompilePass ? "是" : "否");
                temp.put("测试用例得分", vo.testCaseScore);
                temp.put("静态分析得分", vo.evaluateScore);
                dataList.add(temp);
            }
        }
        ExcelUtil.exportXlsx(response, fileName, headList, dataList);
        renderNull();

    }

    public List<ExecuteResultVo> getCompleteExecuteResult(int assignmentId) {
        List<ExecuteResultVo> executeResultVoList = new ArrayList<>();
        int questionNum = questionService.findByAssignmentId(assignmentId).size();
        Map<String, List<StudentQuestion>> listMap = studentQuestionService.findByAssignmentId(assignmentId)
                .stream().collect(Collectors.groupingBy(StudentQuestion::getUserId));
        for (Map.Entry<String, List<StudentQuestion>> entry : listMap.entrySet()) {
            ExecuteResultVo executeResultVo = new ExecuteResultVo();
            executeResultVo.studentId = entry.getKey();
            User student = userService.findByUserId(entry.getKey());
            executeResultVo.studentName = student == null ? "无姓名" : student.getUserName();
            executeResultVo.questionResultList = entry.getValue().stream().map(x -> {
                QuestionResultVo questionResultVo = new QuestionResultVo();
                questionResultVo.questionId = x.get("questionId");
                questionResultVo.questionNo = x.get("questionNo");
                questionResultVo.isCompilePass = x.getIsCompilePass();
                questionResultVo.compileErrorInfo = x.getCompileErrorInfo();
                questionResultVo.testCaseScore = x.getTestCaseScore();
                questionResultVo.evaluateScore = x.getEvaluationScore();
                return questionResultVo;
            }).collect(Collectors.toList());


            int score = 0;
            int testCaseScore = 0;
            int evaluateScore = 0;
            for (QuestionResultVo questionResultVo : executeResultVo.questionResultList) {
                score += questionResultVo.evaluateScore;
                evaluateScore += questionResultVo.evaluateScore;
                score += questionResultVo.testCaseScore;
                testCaseScore += questionResultVo.testCaseScore;
            }
            score = score / questionNum;
            evaluateScore = evaluateScore / questionNum;
            testCaseScore = testCaseScore / questionNum;
            executeResultVo.score = score;
            executeResultVo.evaluateScore = evaluateScore;
            executeResultVo.testCaseScore = testCaseScore;
            executeResultVoList.add(executeResultVo);
        }
        Collections.sort(executeResultVoList);
        return executeResultVoList;
    }

    public ExecuteResultVo getSingleExecuteResult(int assignmentId, String studentId) {
        int questionNum = questionService.findByAssignmentId(assignmentId).size();
        if (questionNum == 0) return null;
        List<StudentQuestion> studentQuestionList = studentQuestionService.findByAssignmentId(assignmentId)
                .stream().filter(x -> x.getUserId().equals(studentId)).collect(Collectors.toList());

        ExecuteResultVo executeResultVo = new ExecuteResultVo();
        executeResultVo.studentId = studentId;
        User student = userService.findByUserId(studentId);
        executeResultVo.studentName = student == null ? "无姓名" : student.getUserName();
        executeResultVo.questionResultList = studentQuestionList.stream().map(x -> {
            QuestionResultVo questionResultVo = new QuestionResultVo();
            questionResultVo.questionNo = x.get("questionNo");
            questionResultVo.isCompilePass = x.getIsCompilePass();
            questionResultVo.compileErrorInfo = x.getCompileErrorInfo();
            questionResultVo.testCaseScore = x.getTestCaseScore();
            questionResultVo.evaluateScore = x.getEvaluationScore();
            return questionResultVo;
        }).collect(Collectors.toList());


        int score = 0;
        int testCaseScore = 0;
        int evaluateScore = 0;
        for (QuestionResultVo questionResultVo : executeResultVo.questionResultList) {
            score += questionResultVo.evaluateScore;
            evaluateScore += questionResultVo.evaluateScore;
            score += questionResultVo.testCaseScore;
            testCaseScore += questionResultVo.testCaseScore;
        }
        score = score / questionNum;
        evaluateScore = evaluateScore / questionNum;
        testCaseScore = testCaseScore / questionNum;
        executeResultVo.score = score;
        executeResultVo.evaluateScore = evaluateScore;
        executeResultVo.testCaseScore = testCaseScore;

        return executeResultVo;
    }

}
