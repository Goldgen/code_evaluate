package com.ce.vo;

import java.util.List;

public class ExecuteResultVo implements Comparable<ExecuteResultVo> {

    public String studentId;
    public String studentName;
    public int score;
    public int testCaseScore;
    public int evaluateScore;
    public List<QuestionResultVo> questionResultList;

    @Override
    public int compareTo(ExecuteResultVo o) {
        return this.studentId.compareTo(o.studentId);
    }
}
