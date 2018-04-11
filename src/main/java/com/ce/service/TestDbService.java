package com.ce.service;

import com.ce.model.TestDb;
import com.jfinal.plugin.activerecord.Db;

import java.util.List;

public class TestDbService {

    private static final TestDb dao = new TestDb().dao();

    public TestDb findById(int id) {
        return dao.findById(id);
    }

    public void deleteById(int id) {
        Db.tx(() -> {
            Db.delete("delete from test_db_test_case where testId = ?", id);
            return true;
        });
        dao.deleteById(id);
    }

    public List<TestDb> getAll() {
        return dao.find("select * from test_db");
    }
}
