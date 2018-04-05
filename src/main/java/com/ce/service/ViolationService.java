package com.ce.service;

import com.ce.model.Violation;

import java.util.ArrayList;
import java.util.List;

public class ViolationService {

    private static final Violation dao = new Violation().dao();

    public Violation findById(String id) {
        return dao.findById(id);
    }

    public List<Violation> findByIds(List<Integer> idList) {
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
        return dao.find("select * from violation where violationId in " + idListStr);
    }

    public void deleteById(String id) {
        dao.deleteById(id);
    }


}
