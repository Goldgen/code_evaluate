package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseViolation<M extends BaseViolation<M>> extends Model<M> implements IBean {

	public M setViolationId(java.lang.Integer violationId) {
		set("violationId", violationId);
		return (M)this;
	}
	
	public java.lang.Integer getViolationId() {
		return getInt("violationId");
	}

	public M setPath(java.lang.String path) {
		set("path", path);
		return (M)this;
	}
	
	public java.lang.String getPath() {
		return getStr("path");
	}

	public M setStartLine(java.lang.Integer startLine) {
		set("startLine", startLine);
		return (M)this;
	}
	
	public java.lang.Integer getStartLine() {
		return getInt("startLine");
	}

	public M setStartColumn(java.lang.Integer startColumn) {
		set("startColumn", startColumn);
		return (M)this;
	}
	
	public java.lang.Integer getStartColumn() {
		return getInt("startColumn");
	}

	public M setEndLine(java.lang.Integer endLine) {
		set("endLine", endLine);
		return (M)this;
	}
	
	public java.lang.Integer getEndLine() {
		return getInt("endLine");
	}

	public M setEndColumn(java.lang.Integer endColumn) {
		set("endColumn", endColumn);
		return (M)this;
	}
	
	public java.lang.Integer getEndColumn() {
		return getInt("endColumn");
	}

	public M setRule(java.lang.String rule) {
		set("rule", rule);
		return (M)this;
	}
	
	public java.lang.String getRule() {
		return getStr("rule");
	}

	public M setCategory(java.lang.String category) {
		set("category", category);
		return (M)this;
	}
	
	public java.lang.String getCategory() {
		return getStr("category");
	}

	public M setPriority(java.lang.Integer priority) {
		set("priority", priority);
		return (M)this;
	}
	
	public java.lang.Integer getPriority() {
		return getInt("priority");
	}

	public M setMessage(java.lang.String message) {
		set("message", message);
		return (M)this;
	}
	
	public java.lang.String getMessage() {
		return getStr("message");
	}

}
