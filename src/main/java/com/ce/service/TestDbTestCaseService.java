package com.ce.service;

import com.ce.model.TestDb;
import com.ce.model.TestDbTestCase;
import com.jfinal.plugin.activerecord.Db;

import java.util.List;

public class TestDbTestCaseService {

    private static final TestDbTestCase dao = new TestDbTestCase().dao();

    public TestDbTestCase findById(int id) {
        return dao.findById(id);
    }

    public void deleteById(int id) {
        dao.deleteById(id);
    }

    public List<TestDbTestCase> findByTestId(int testId) {
        return dao.find("select * from test_db_test_case where testId = ?", testId);
    }
}
