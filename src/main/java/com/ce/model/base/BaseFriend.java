package com.ce.model.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseFriend<M extends BaseFriend<M>> extends Model<M> implements IBean {

	public M setUserId(java.lang.String userId) {
		set("userId", userId);
		return (M)this;
	}
	
	public java.lang.String getUserId() {
		return getStr("userId");
	}

	public M setFriendId(java.lang.String friendId) {
		set("friendId", friendId);
		return (M)this;
	}
	
	public java.lang.String getFriendId() {
		return getStr("friendId");
	}

}
