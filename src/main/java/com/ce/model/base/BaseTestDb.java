package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseTestDb<M extends BaseTestDb<M>> extends Model<M> implements IBean {

	public M setTestId(java.lang.Integer testId) {
		set("testId", testId);
		return (M)this;
	}
	
	public java.lang.Integer getTestId() {
		return getInt("testId");
	}

	public M setContent(java.lang.String content) {
		set("content", content);
		return (M)this;
	}
	
	public java.lang.String getContent() {
		return getStr("content");
	}

}
