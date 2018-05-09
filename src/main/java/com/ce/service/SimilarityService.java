package com.ce.service;

import com.ce.model.first.Similarity;

import java.util.List;

public class SimilarityService {

    private static final Similarity dao = new Similarity().dao();

    public Similarity findById(int questionId,String userId1,String userId2) {
        return dao.findById(questionId,userId1,userId2);
    }

    public List<Similarity> findByAssignmentId(int assignmentId){

        return dao.find("select * from question q inner join similarity s on q.questionId=s.questionId where q.assignmentId= ?",assignmentId);

    }
}
