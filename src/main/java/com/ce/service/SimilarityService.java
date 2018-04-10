package com.ce.service;

import com.ce.model.Similarity;

public class SimilarityService {

    private static final Similarity dao = new Similarity().dao();

    public Similarity findById(int questionId,String userId2,String userId1) {
        return dao.findById(questionId,userId2,userId1);
    }
}
