package com.ce.vo;

import com.ce.model.first.Violation;

import java.util.List;

public class QuestionResultVo {
    public int questionNo;
    public boolean isCompilePass;
    public String compileErrorInfo;
    public int testCaseScore;
    public int evaluateScore;
    public List<Violation> violationList;

}
