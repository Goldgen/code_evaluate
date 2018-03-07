package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseAssignment<M extends BaseAssignment<M>> extends Model<M> implements IBean {

	public M setAssignmentId(java.lang.Integer assignmentId) {
		set("assignmentId", assignmentId);
		return (M)this;
	}
	
	public java.lang.Integer getAssignmentId() {
		return getInt("assignmentId");
	}

	public M setClassId(java.lang.String classId) {
		set("classId", classId);
		return (M)this;
	}
	
	public java.lang.String getClassId() {
		return getStr("classId");
	}

	public M setTitle(java.lang.String title) {
		set("title", title);
		return (M)this;
	}
	
	public java.lang.String getTitle() {
		return getStr("title");
	}

	public M setContent(java.lang.String content) {
		set("content", content);
		return (M)this;
	}
	
	public java.lang.String getContent() {
		return getStr("content");
	}

	public M setStartDate(java.util.Date startDate) {
		set("startDate", startDate);
		return (M)this;
	}
	
	public java.util.Date getStartDate() {
		return get("startDate");
	}

	public M setEndDate(java.util.Date endDate) {
		set("endDate", endDate);
		return (M)this;
	}
	
	public java.util.Date getEndDate() {
		return get("endDate");
	}

	public M setNeedSubmit(java.lang.Boolean needSubmit) {
		set("needSubmit", needSubmit);
		return (M)this;
	}
	
	public java.lang.Boolean getNeedSubmit() {
		return get("needSubmit");
	}

	public M setSubmitCount(java.lang.Integer submitCount) {
		set("submitCount", submitCount);
		return (M)this;
	}
	
	public java.lang.Integer getSubmitCount() {
		return getInt("submitCount");
	}

	public M setAnswer(java.lang.String answer) {
		set("answer", answer);
		return (M)this;
	}
	
	public java.lang.String getAnswer() {
		return getStr("answer");
	}

	public M setStatus(java.lang.Integer status) {
		set("status", status);
		return (M)this;
	}
	
	public java.lang.Integer getStatus() {
		return getInt("status");
	}

}
