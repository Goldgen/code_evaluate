package com.ce.service;

import com.ce.model.Question;
import com.ce.model.TestCase;
import com.ce.model.base.BaseTestCase;
import com.jfinal.plugin.activerecord.Db;
import com.jfinal.plugin.activerecord.IAtom;

import java.sql.SQLException;
import java.util.List;
import java.util.stream.Collectors;

public class QuestionService {

    private static final Question questionDao = new Question().dao();

    private static final TestCase testCaseDao = new TestCase().dao();

    public Question findById(int id) {
        return questionDao.findById(id);
    }

    public void deleteById(int id) {

        Db.tx(() -> {
            Db.delete("delete from test_case where questionId = ?", id);
            return true;
        });
        questionDao.deleteById(id);


    }
}
