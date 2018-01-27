package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseClassTutor<M extends BaseClassTutor<M>> extends Model<M> implements IBean {

	public M setClassId(java.lang.String classId) {
		set("classId", classId);
		return (M)this;
	}
	
	public java.lang.String getClassId() {
		return getStr("classId");
	}

	public M setUserId(java.lang.String userId) {
		set("userId", userId);
		return (M)this;
	}
	
	public java.lang.String getUserId() {
		return getStr("userId");
	}

}
