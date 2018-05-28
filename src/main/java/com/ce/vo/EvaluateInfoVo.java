package com.ce.vo;

import com.ce.model.first.Violation;

import java.util.List;

public class EvaluateInfoVo {

    public boolean isCompilePass;
    public String compileErrorInfo;
    public String executeInfo;
    public int testCasePassNum;
    public int testCaseSize;
    public int testCaseScore;
    public int evaluationScore;
    public List<Violation> violationList;
}
