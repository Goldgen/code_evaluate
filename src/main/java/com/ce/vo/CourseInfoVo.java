package com.ce.vo;

public class CourseInfoVo {

    public String courseId;
    public String courseName;

    @Override
    public boolean equals(Object obj) {
        if (!(obj instanceof CourseInfoVo)) return false;
        return ((CourseInfoVo) obj).courseId.equals(this.courseId);
    }
}
