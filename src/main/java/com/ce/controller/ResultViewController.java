package com.ce.controller;

import com.alibaba.fastjson.JSON;
import com.ce.config.MyConstants;
import com.ce.model.*;
import com.ce.model.first.Question;
import com.ce.model.first.Similarity;
import com.ce.model.first.StudentQuestion;
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

    @ActionKey("/similarity")
    public void similarityResult() {
        int assignmentId = getParaToInt(0);
        Assignment assignment = assignmentService.findById(assignmentId);
        setAttr("assignment", assignment);
        List<SimilarityResultVo> similarityResultVoList = getSimilarityResult(assignmentId);
        setAttr("similarityResultVoList", similarityResultVoList);
        render("similarity_analysis.html");
    }

    @ActionKey("/analysis")
    public void analysis() throws IOException, InterruptedException {
        int assignmentId = getParaToInt(0);

        Assignment assignment = assignmentService.findById(assignmentId);

        List<QuestionListVo> questionVoList = testCaseService.findByAssignmentIdGroupByquestionId(assignmentId);
        //预先记录相似度分析的文件名
        Map<Integer, Temp> questionFilesPathMap = new TreeMap<>();
        for /*、*/(QuestionListVo vo : questionVoList) {
            Temp temp = new Temp();
            temp.questionId = vo.questionId;
            temp.questionFilesPath = "";
            questionFilesPathMap.put(vo.questionNo, temp);
        }

        List<Upload> uploadList = uploadService.findByAssignmentId(assignmentId);
        if (!uploadList.isEmpty()) {

            String assignmentDirectoryPath = MyConstants.uploadPath + assignment.getUploadDirectory() + "/";

            for (Upload upload : uploadList) {
                String stuNum = upload.getUserId();
                List<FileInfo> fileInfoList = JSON.parseArray(upload.getUploadFileInfo(), FileInfo.class);
                for (FileInfo fileInfo : fileInfoList) {
                    int questionNo = Integer.parseInt(fileInfo.prefix);
                    Temp tempInfo = questionFilesPathMap.get(questionNo);
                    if (tempInfo != null) {
                        if (tempInfo.questionFilesPath.isEmpty()) {
                            tempInfo.questionFilesPath += "./" + stuNum + "/" + fileInfo.fileName;
                        } else {
                            tempInfo.questionFilesPath += " ./" + stuNum + "/" + fileInfo.fileName;
                        }
                        questionFilesPathMap.replace(questionNo, tempInfo);
                    }
                }
            }


            //相似度分析
            List<Similarity> similarityList = new ArrayList<>();
            for (Map.Entry<Integer, Temp> entry : questionFilesPathMap.entrySet()) {
                CompileUtil.similarityTest(assignmentDirectoryPath, entry.getKey(), entry.getValue().questionFilesPath);
                String content = FileUtil.readFile(assignmentDirectoryPath + "similarity" + entry.getKey() + ".txt");
                Pattern pattern = Pattern.compile("\\./(.*?)/" + entry.getKey() + "\\.c consists for (.*?) % of \\./(.*?)/" + entry.getKey() + "\\.c");
                Matcher matcher = pattern.matcher(content);
                while (matcher.find()) {
                    String studentId1 = matcher.group(1);
                    String studentId2 = matcher.group(3);
                    Similarity test = similarityList.stream()
                            .filter(x -> x.getUserId2().equals(studentId1) && x.getUserId1().equals(studentId2) && x.getQuestionId() == entry.getValue().questionId)
                            .findFirst().orElse(null);
                    if (test != null) {
                        test.setToSimilarity(Integer.parseInt(matcher.group(2)));
                    } else {
                        Similarity info = new Similarity();
                        info.setQuestionId(entry.getValue().questionId);
                        info.setUserId1(matcher.group(1));
                        info.setUserId2(matcher.group(3));
                        info.setFromSimilarity(Integer.parseInt(matcher.group(2)));
                        similarityList.add(info);
                    }
                }
            }
            for (Similarity similarity : similarityList) {
                if (similarityService.findById(similarity.getQuestionId(), similarity.getUserId1(), similarity.getUserId2()) != null) {
                    similarity.update();
                } else {
                    similarity.save();
                }
            }
            //相似度分析end
        }

        assignment.setIsSimFinished(true);
        assignment.update();

        redirect("/similarity/" + assignmentId);
    }


    public void confirmRelease() {
        int assignmentId = getParaToInt("assignmentId");
        assignmentService.update(assignmentId, 3);
        redirect("/assignment/detail/" + assignmentId + "-execute_result");
    }

    public void allExcel() {
        int assignmentId = getParaToInt("assignmentId");
        List<ExecuteResultVo> executeResultVoList = getCompleteExecuteResult(assignmentId);
        HttpServletResponse response = getResponse();
        String fileName = "作业" + assignmentId + "成绩表";
        List<String> headList = new ArrayList<>();
        headList.add("学号");
        headList.add("姓名");
        headList.add("得分");
        List<Map<String, Object>> dataList = new ArrayList<>();
        for (ExecuteResultVo vo : executeResultVoList) {
            Map<String, Object> temp = new HashMap<>();
            temp.put("学号", vo.studentId);
            temp.put("姓名", vo.studentName);
            temp.put("得分", vo.score);
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
                questionResultVo.questionNo = x.get("questionNo");
                questionResultVo.isCompilePass = x.getIsCompilePass();
                questionResultVo.compileErrorInfo = x.getCompileErrorInfo();
                questionResultVo.testCaseScore = x.getTestCaseScore();
                questionResultVo.evaluateScore = x.getEvaluationScore();
                List<Integer> violationIds = JSON.parseArray(x.getViolationIds(), Integer.class);
                questionResultVo.violationList = violationService.findByIds(violationIds);
                return questionResultVo;
            }).collect(Collectors.toList());


            int score = 0;
            for (QuestionResultVo questionResultVo : executeResultVo.questionResultList) {
                score += questionResultVo.evaluateScore;
                score += questionResultVo.testCaseScore;
            }
            score = score / questionNum;
            executeResultVo.score = score;
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
            List<Integer> violationIds = JSON.parseArray(x.getViolationIds(), Integer.class);
            questionResultVo.violationList = violationService.findByIds(violationIds);
            return questionResultVo;
        }).collect(Collectors.toList());


        int score = 0;
        for (QuestionResultVo questionResultVo : executeResultVo.questionResultList) {
            score += questionResultVo.evaluateScore;
            score += questionResultVo.testCaseScore;
        }
        score = score / questionNum;
        executeResultVo.score = score;

        return executeResultVo;
    }


    public List<SimilarityResultVo> getSimilarityResult(int assignmentId) {
        List<SimilarityResultVo> similarityResultVoList = new ArrayList<>();
        Map<Integer, List<Similarity>> listMap = similarityService.findByAssignmentId(assignmentId)
                .stream().collect(Collectors.groupingBy(Similarity::getQuestionId));
        for (Map.Entry<Integer, List<Similarity>> entry : listMap.entrySet()) {
            SimilarityResultVo similarityResultVo = new SimilarityResultVo();
            similarityResultVo.questionId = entry.getKey();
            Question question = questionService.findById(entry.getKey());
            similarityResultVo.questionNo = question == null ? 0 : question.getQuestionNo();
            List<SimilarityVo> similarityVoList = entry.getValue().stream().map(x -> {
                SimilarityVo similarityVo = new SimilarityVo();
                similarityVo.userId1 = x.getUserId1();
                similarityVo.userId2 = x.getUserId2();
                User user1 = userService.findByUserId(x.getUserId1());
                User user2 = userService.findByUserId(x.getUserId2());
                similarityVo.userName1 = user1 == null ? "" : user1.getUserName();
                similarityVo.userName2 = user2 == null ? "" : user2.getUserName();
                similarityVo.similarity = x.getFromSimilarity() > x.getToSimilarity() ? x.getFromSimilarity() : x.getToSimilarity();
                return similarityVo;
            }).collect(Collectors.toList());
            similarityResultVo.lowSimilarityVoList = similarityVoList
                    .stream().filter(x -> x.similarity > 10 && x.similarity <= 30).collect(Collectors.toList());
            similarityResultVo.mediumSimilarityVoList = similarityVoList
                    .stream().filter(x -> x.similarity > 30 && x.similarity <= 50).collect(Collectors.toList());
            similarityResultVo.highSimilarityVoList = similarityVoList
                    .stream().filter(x -> x.similarity > 50).collect(Collectors.toList());
            similarityResultVoList.add(similarityResultVo);
        }
        Collections.sort(similarityResultVoList);
        return similarityResultVoList;
    }
}

class Temp {
    String questionFilesPath;
    int questionId;
}