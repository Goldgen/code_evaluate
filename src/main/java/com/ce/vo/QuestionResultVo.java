package com.ce.vo;

import com.ce.model.first.Violation;

import java.util.List;

public class QuestionResultVo {
    public int questionId;
    public int questionNo;
    public String content;
    public boolean isCompilePass;
    public String compileErrorInfo;
    public int testCaseScore;
    public int evaluateScore;
    public int totalScore;
}
