package com.ce.service;

import com.ce.model.Similarity;

public class SimilarityService {

    private static final Similarity dao = new Similarity().dao();

    public Similarity findById(int questionId,String userId1,String userId2) {
        return dao.findById(questionId,userId1,userId2);
    }
}
