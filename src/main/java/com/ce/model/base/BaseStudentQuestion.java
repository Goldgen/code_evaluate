package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseStudentQuestion<M extends BaseStudentQuestion<M>> extends Model<M> implements IBean {

	public M setUserId(java.lang.String userId) {
		set("userId", userId);
		return (M)this;
	}
	
	public java.lang.String getUserId() {
		return getStr("userId");
	}

	public M setQuestionId(java.lang.Integer questionId) {
		set("questionId", questionId);
		return (M)this;
	}
	
	public java.lang.Integer getQuestionId() {
		return getInt("questionId");
	}

	public M setIsCompilePass(java.lang.Boolean isCompilePass) {
		set("isCompilePass", isCompilePass);
		return (M)this;
	}
	
	public java.lang.Boolean getIsCompilePass() {
		return get("isCompilePass");
	}

	public M setTestCasePassRate(java.lang.Integer testCasePassRate) {
		set("testCasePassRate", testCasePassRate);
		return (M)this;
	}
	
	public java.lang.Integer getTestCasePassRate() {
		return getInt("testCasePassRate");
	}

	public M setEvaluationScore(java.lang.Integer evaluationScore) {
		set("evaluationScore", evaluationScore);
		return (M)this;
	}
	
	public java.lang.Integer getEvaluationScore() {
		return getInt("evaluationScore");
	}

	public M setViolationIds(java.lang.String violationIds) {
		set("violationIds", violationIds);
		return (M)this;
	}
	
	public java.lang.String getViolationIds() {
		return getStr("violationIds");
	}

}
