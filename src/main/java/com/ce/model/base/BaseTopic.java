package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseTopic<M extends BaseTopic<M>> extends Model<M> implements IBean {

	public M setTopicId(java.lang.Integer topicId) {
		set("topicId", topicId);
		return (M)this;
	}
	
	public java.lang.Integer getTopicId() {
		return getInt("topicId");
	}

	public M setUserId(java.lang.String userId) {
		set("userId", userId);
		return (M)this;
	}
	
	public java.lang.String getUserId() {
		return getStr("userId");
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

	public M setReleaseTime(java.util.Date releaseTime) {
		set("releaseTime", releaseTime);
		return (M)this;
	}
	
	public java.util.Date getReleaseTime() {
		return get("releaseTime");
	}

	public M setSolveTime(java.util.Date solveTime) {
		set("solveTime", solveTime);
		return (M)this;
	}
	
	public java.util.Date getSolveTime() {
		return get("solveTime");
	}

	public M setKickCount(java.lang.Integer kickCount) {
		set("kickCount", kickCount);
		return (M)this;
	}
	
	public java.lang.Integer getKickCount() {
		return getInt("kickCount");
	}

	public M setIsSolved(java.lang.Boolean isSolved) {
		set("isSolved", isSolved);
		return (M)this;
	}
	
	public java.lang.Boolean getIsSolved() {
		return get("isSolved");
	}

	public M setType(java.lang.Integer type) {
		set("type", type);
		return (M)this;
	}
	
	public java.lang.Integer getType() {
		return getInt("type");
	}

}