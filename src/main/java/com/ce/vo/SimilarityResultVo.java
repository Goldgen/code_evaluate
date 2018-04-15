package com.ce.vo;

import java.util.List;

public class SimilarityResultVo implements Comparable<SimilarityResultVo> {

    public Integer questionId;
    public Integer questionNo;
    public List<SimilarityVo> lowSimilarityVoList;
    public List<SimilarityVo> mediumSimilarityVoList;
    public List<SimilarityVo> highSimilarityVoList;

    @Override
    public int compareTo(SimilarityResultVo o) {
        return this.questionNo.compareTo(o.questionNo);
    }
}
