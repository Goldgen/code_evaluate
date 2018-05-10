package com.ce.model.first.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseQuestion<M extends BaseQuestion<M>> extends Model<M> implements IBean {

	public M setQuestionId(java.lang.Integer questionId) {
		set("questionId", questionId);
		return (M)this;
	}
	
	public java.lang.Integer getQuestionId() {
		return getInt("questionId");
	}

	public M setQuestionNo(java.lang.Integer questionNo) {
		set("questionNo", questionNo);
		return (M)this;
	}
	
	public java.lang.Integer getQuestionNo() {
		return getInt("questionNo");
	}

	public M setAssignmentId(java.lang.Integer assignmentId) {
		set("assignmentId", assignmentId);
		return (M)this;
	}
	
	public java.lang.Integer getAssignmentId() {
		return getInt("assignmentId");
	}

	public M setContent(java.lang.String content) {
		set("content", content);
		return (M)this;
	}
	
	public java.lang.String getContent() {
		return getStr("content");
	}

}
