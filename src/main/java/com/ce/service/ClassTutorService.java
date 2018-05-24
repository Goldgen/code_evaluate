package com.ce.service;

import com.ce.model.second.ClassTutor;

import java.util.List;

public class ClassTutorService {

    private static final ClassTutor dao = new ClassTutor().dao();

    public List<ClassTutor> findAll() {
        return dao.find("select * from class_tutor");
    }
}
