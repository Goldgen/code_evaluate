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
        return dao.find("select * from test_db ");
    }

    public int countByCondition(String courseId, int topicId, int difficulty, String content) {
        String sql = "select td.testId, td.courseId,td.topicId,tp.topicName,td.testName,td.difficulty,td.content " +
                "from test_db td,topic tp where td.topicId=tp.topicId";
        if (!courseId.isEmpty()) {
            sql += " and td.courseId = " + courseId;
        }
        if (topicId > 0) {
            sql += " and td.topicId = " + topicId;
        }
        if (difficulty > 0) {
            sql += " and td.difficulty = " + difficulty;
        }
        if (!content.isEmpty()) {
            sql += " and (td.testName like '%" + content + "%' or td.content like '%" + content + "%')";
        }
        return dao.find(sql).size();
    }

    public List<TestDb> getByConditionAndPage(int pageCount, int pageSize, String courseId, int topicId, int difficulty, String content) {
        String sql = "select td.testId, td.courseId,td.topicId,tp.topicName,td.testName,td.difficulty,td.content " +
                "from test_db td,topic tp where td.topicId=tp.topicId";
        if (!courseId.isEmpty()) {
            sql += " and td.courseId = " + courseId;
        }
        if (topicId > 0) {
            sql += " and td.topicId = " + topicId;
        }
        if (difficulty > 0) {
            sql += " and td.difficulty = " + difficulty;
        }
        if (!content.isEmpty()) {
            sql += " and (td.testName like '%" + content + "%' or td.content like '%" + content + "%')";
        }
        return dao.find(sql + " limit ? , ?", (pageCount - 1) * pageSize, pageSize);
    }
}
