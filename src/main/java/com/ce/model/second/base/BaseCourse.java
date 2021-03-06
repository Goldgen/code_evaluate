package com.ce.model.second.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseCourse<M extends BaseCourse<M>> extends Model<M> implements IBean {

	public M setCourseId(java.lang.String courseId) {
		set("courseId", courseId);
		return (M)this;
	}
	
	public java.lang.String getCourseId() {
		return getStr("courseId");
	}

	public M setCourseName(java.lang.String courseName) {
		set("courseName", courseName);
		return (M)this;
	}
	
	public java.lang.String getCourseName() {
		return getStr("courseName");
	}

	public M setCourseCredit(java.lang.Double courseCredit) {
		set("courseCredit", courseCredit);
		return (M)this;
	}
	
	public java.lang.Double getCourseCredit() {
		return getDouble("courseCredit");
	}

	public M setCourseWeekTime(java.lang.Double courseWeekTime) {
		set("courseWeekTime", courseWeekTime);
		return (M)this;
	}
	
	public java.lang.Double getCourseWeekTime() {
		return getDouble("courseWeekTime");
	}

	public M setCourseStatus(java.lang.Integer courseStatus) {
		set("courseStatus", courseStatus);
		return (M)this;
	}
	
	public java.lang.Integer getCourseStatus() {
		return getInt("courseStatus");
	}

}
