package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseExcuteResult<M extends BaseExcuteResult<M>> extends Model<M> implements IBean {

	public M setExcuteResultId(java.lang.Integer excuteResultId) {
		set("excuteResultId", excuteResultId);
		return (M)this;
	}
	
	public java.lang.Integer getExcuteResultId() {
		return getInt("excuteResultId");
	}

	public M setAssignmentId(java.lang.Integer assignmentId) {
		set("assignmentId", assignmentId);
		return (M)this;
	}
	
	public java.lang.Integer getAssignmentId() {
		return getInt("assignmentId");
	}

	public M setExcuteStatus(java.lang.Integer excuteStatus) {
		set("excuteStatus", excuteStatus);
		return (M)this;
	}
	
	public java.lang.Integer getExcuteStatus() {
		return getInt("excuteStatus");
	}

	public M setTestCase(java.lang.String testCase) {
		set("testCase", testCase);
		return (M)this;
	}
	
	public java.lang.String getTestCase() {
		return getStr("testCase");
	}

	public M setAnswer(java.lang.String answer) {
		set("answer", answer);
		return (M)this;
	}
	
	public java.lang.String getAnswer() {
		return getStr("answer");
	}

	public M setIsExcutePass(java.lang.Integer isExcutePass) {
		set("isExcutePass", isExcutePass);
		return (M)this;
	}
	
	public java.lang.Integer getIsExcutePass() {
		return getInt("isExcutePass");
	}

}
