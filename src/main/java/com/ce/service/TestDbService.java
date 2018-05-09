package com.ce.service;

import com.ce.model.first.TestDb;
import com.jfinal.plugin.activerecord.Db;

import java.util.ArrayList;
import java.util.List;

public class TestDbService {

    private static final TestDb dao = new TestDb().dao();

    public TestDb findById(int id) {
        return dao.findById(id);
    }

    public List<TestDb> findByIds(List<Integer> idList) {
        if (idList.isEmpty())
            return new ArrayList<>();
        String idListStr = "(";
        for (int id : idList) {
            if (id == idList.get(idList.size() - 1)) {
                idListStr += id + ")";
            } else {
                idListStr += id + ",";
            }

        }
        return dao.find("select * from test_db where testId in " + idListStr);
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
