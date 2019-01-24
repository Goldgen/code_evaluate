package com.ce.service;

import com.ce.model.first.Topic;

import java.util.List;

public class TopicService {

    private static final Topic dao = new Topic().dao();

    public Topic findById(int id) {
        return dao.findById(id);
    }

    public List<Topic> getAll() {
        return dao.find("select * from topic");
    }

}
