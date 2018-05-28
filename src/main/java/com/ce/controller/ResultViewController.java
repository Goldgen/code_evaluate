package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.model.first.Question;
import com.ce.model.first.StudentQuestion;
import com.ce.model.first.TestCase;
import com.ce.model.second.Assignment;
import com.ce.model.second.User;
import com.ce.service.*;
import com.ce.util.CorrectUtil;
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

    private static QuestionService questionService = new QuestionService();

    private static UserService userService = new UserService();

    private static StudentQuestionService studentQuestionService = new StudentQuestionService();

    private static TestCaseService testCaseService = new TestCaseService();

    @ActionKey("/execute")
    public void executeResult() {
        int assignmentId = getParaToInt(0);
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        StringBuilder submitCountInfo = new StringBuilder();
        List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId, assignment.getClassId(), submitCountInfo);
        List<ExecuteResultVo> submitResultVoList = executeResultVoList.stream().filter(x -> x.submitStatus.equals("已提交")).collect(Collectors.toList());
        List<ExecuteResultVo> unSubmitResultVoList = executeResultVoList.stream().filter(x -> x.submitStatus.equals("未提交")).collect(Collectors.toList());
        submitResultVoList.addAll(unSubmitResultVoList);
        setAttr("submitCountInfo", submitCountInfo.toString());
        setAttr("executeResultVoList", submitResultVoList);
        render("execute_result.html");

    }

    //查看代码
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

    public void reCorrect() throws IOException, InterruptedException {
        int assignmentId = getParaToInt("assignmentId");
        Assignment assignment = assignmentService.findById(assignmentId);
        int questionId = getParaToInt("questionId");
        Question question = questionService.findById(questionId);
        String studentId = getPara("userId");

        StudentQuestion studentQuestion = studentQuestionService.findById(questionId, studentId);
        String filePath = studentQuestion.getCodePath();
        String fileName;
        if (filePath.endsWith(".c")) {
            fileName = question.getQuestionNo() + ".c";
        } else {
            fileName = question.getQuestionNo() + ".cpp";
        }

        String unionFolderName = assignment.getUploadDirectory();

        String studentDirectoryPath = unionFolderName + "/" + studentId + "/";

        EvaluateInfoVo evaluateInfo = new EvaluateInfoVo();

        //编译
        ShellReturnInfo returnInfo = CorrectUtil.isCompilePass(studentDirectoryPath, fileName);

        evaluateInfo.isCompilePass = returnInfo.isPass;
        evaluateInfo.compileErrorInfo = returnInfo.errorInfo.replace("\n", "<br>");

        if (!returnInfo.isPass) {
            studentQuestion.setIsCompilePass(false);
            studentQuestion.setCompileErrorInfo(returnInfo.errorInfo);
            studentQuestion.update();
        } else {
            List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);

            List<TestCase> testCaseList = questionVoList.stream().filter(x -> x.questionId == questionId)
                    .findFirst().orElse(new QuestionListVo()).testCaseList;

            //执行，比较测试用例和输出
            System.out.println("正在执行学号" + studentId + " 第" + questionId + "题文件");
            evaluateInfo.executeInfo = "";
            double testCasePassNum = 0;
            for (TestCase testCase : testCaseList) {
                String inputFileName = question.getQuestionNo() + "_input_" + testCase.getTestCaseId() + ".txt";
                String outputFileName = question.getQuestionNo() + "_output_" + testCase.getTestCaseId() + ".txt";
                ShellReturnInfo excuteReturnInfo = CorrectUtil.execute(studentDirectoryPath, question.getQuestionNo() + ".out", inputFileName, outputFileName);
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

            studentQuestion.setIsCompilePass(true);
            studentQuestion.setCompileErrorInfo("");
            studentQuestion.setTestCaseScore(testCaseScore);
            studentQuestion.setTestCasePassNum((int) testCasePassNum);
            studentQuestion.update();
        }

        String json = JSON.toJSONString(JsonResponse.ok(evaluateInfo, 1));
        renderJson(json);
    }

    //查看学生代码输出
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
        CorrectUtil.zip(filePath, copyFilePath, unionName);
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

            CorrectUtil.similarityTest(unionFolderName, question.getQuestionNo(), cFileStr.toString(), "c");
            CorrectUtil.similarityTest(unionFolderName, question.getQuestionNo(), cppFileStr.toString(), "cpp");
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

    public void staticAnalysis() throws IOException, InterruptedException {
        int assignmentId = getParaToInt("assignmentId");
        Assignment assignment = assignmentService.findById(assignmentId);
        int questionId = getParaToInt("questionId");
        Question question = questionService.findById(questionId);
        String studentId = getPara("userId");

        StudentQuestion studentQuestion = studentQuestionService.findById(questionId, studentId);
        String filePath = studentQuestion.getCodePath();
        String fileName;
        if (filePath.endsWith(".c")) {
            fileName = question.getQuestionNo() + ".c";
        } else {
            fileName = question.getQuestionNo() + ".cpp";
        }

        String unionFolderName = assignment.getUploadDirectory();

        String studentDirectoryPath = unionFolderName + "/" + studentId + "/";

        String resultFileName = question.getQuestionNo() + "_result.json";
        CorrectUtil.evaluate(studentDirectoryPath, fileName, resultFileName);
        String evaluateFilePath = studentDirectoryPath + "/" + question.getQuestionNo() + "_result.json";
        String json = FileUtil.readFile(evaluateFilePath);
        OclintInfoVo info = JSON.parseObject(json, OclintInfoVo.class);

        renderJson(JSON.toJSONString(JsonResponse.ok(info.violation, 1)));
    }

    public void allExcel() {
        int assignmentId = getParaToInt("assignmentId");
        Assignment assignment = assignmentService.findById(assignmentId);
        List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId, assignment.getClassId(), new StringBuilder());
        HttpServletResponse response = getResponse();
        String fileName = "作业" + assignmentId + "成绩表";
        List<String> headList = new ArrayList<>();
        headList.add("学号");
        headList.add("姓名");
        headList.add("测试用例得分");
        headList.add("静态分析得分");
        headList.add("总分");
        headList.add("提交状态");
        List<Map<String, Object>> dataList = new ArrayList<>();

        for (ExecuteResultVo vo : executeResultVoList) {
            Map<String, Object> temp = new HashMap<>();
            temp.put("学号", vo.studentId);
            temp.put("姓名", vo.studentName);
            temp.put("测试用例得分", vo.testCaseScore);
            temp.put("静态分析得分", vo.evaluateScore);
            temp.put("总分", vo.score);
            temp.put("提交状态", vo.submitStatus);
            dataList.add(temp);
        }

        ExcelUtil.exportXlsx(response, fileName, headList, dataList);
        renderNull();
    }

    public void singleExcel() {
        int assignmentId = getParaToInt("assignmentId");
        String studentId = getPara("studentId");
        ExecuteResultVo executeResultVo = getSingleExecuteResult(assignmentId, studentId);
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

    public List<ExecuteResultVo> getCompleteExecuteResult(int assignmentId, String classId, StringBuilder submitCountInfo) {

        List<ExecuteResultVo> executeResultVoList = new ArrayList<>();
        int questionNum = questionService.findByAssignmentId(assignmentId).size();
        int submitCount[] = new int[questionNum + 1];
        Map<String, List<StudentQuestion>> listMap = studentQuestionService.findByAssignmentId(assignmentId)
                .stream().collect(Collectors.groupingBy(StudentQuestion::getUserId));
        List<String> existStudentIdList = new ArrayList<>();
        for (Map.Entry<String, List<StudentQuestion>> entry : listMap.entrySet()) {
            ExecuteResultVo executeResultVo = new ExecuteResultVo();
            executeResultVo.studentId = entry.getKey();
            existStudentIdList.add(entry.getKey());
            User student = userService.findByUserId(entry.getKey());
            executeResultVo.studentName = student == null ? "无姓名" : student.getUserName();
            executeResultVo.questionResultList = entry.getValue().stream().map(x -> {
                QuestionResultVo questionResultVo = new QuestionResultVo();
                questionResultVo.questionId = x.get("questionId");
                questionResultVo.questionNo = x.get("questionNo");
                submitCount[questionResultVo.questionNo]++;
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
            executeResultVo.submitStatus = "已提交";
            executeResultVoList.add(executeResultVo);
        }
        List<User> unSubmitUserList = userService.findStudentByClassId(classId)
                .stream().filter(x -> !existStudentIdList.contains(x.getUserId())).collect(Collectors.toList());
        for (User user : unSubmitUserList) {
            ExecuteResultVo executeResultVo = new ExecuteResultVo();
            executeResultVo.studentId = user.getUserId();
            executeResultVo.studentName = user.getUserName();
            executeResultVo.questionResultList = new ArrayList<>();
            executeResultVo.score = 0;
            executeResultVo.evaluateScore = 0;
            executeResultVo.testCaseScore = 0;
            executeResultVo.submitStatus = "未提交";
            executeResultVoList.add(executeResultVo);
        }


        for (int i = 1; i < questionNum + 1; i++) {
            submitCountInfo.append("第").append(i).append("题已有").append(submitCount[i]).append("人提交<br>");
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

}
