package com.ce.service;

import com.ce.model.first.Similarity;

import java.util.List;

public class SimilarityService {

    private static final Similarity dao = new Similarity().dao();

    public Similarity findById(int questionId, String userId2, String userId1) {
        return dao.findById(questionId, userId1, userId2);
    }
    public List<Similarity> findByQuestionId(int questionId) {
        return dao.find("select * from similarity where questionId = ?", questionId);
    }

}
