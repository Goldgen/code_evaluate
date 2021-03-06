package com.ce.model.second.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BasePpt<M extends BasePpt<M>> extends Model<M> implements IBean {

	public M setPptId(java.lang.Integer pptId) {
		set("pptId", pptId);
		return (M)this;
	}
	
	public java.lang.Integer getPptId() {
		return getInt("pptId");
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

	public M setChapter(java.lang.String chapter) {
		set("chapter", chapter);
		return (M)this;
	}
	
	public java.lang.String getChapter() {
		return getStr("chapter");
	}

	public M setTime(java.util.Date time) {
		set("time", time);
		return (M)this;
	}
	
	public java.util.Date getTime() {
		return get("time");
	}

	public M setCount(java.lang.Integer count) {
		set("count", count);
		return (M)this;
	}
	
	public java.lang.Integer getCount() {
		return getInt("count");
	}

	public M setPath(java.lang.String path) {
		set("path", path);
		return (M)this;
	}
	
	public java.lang.String getPath() {
		return getStr("path");
	}

}
