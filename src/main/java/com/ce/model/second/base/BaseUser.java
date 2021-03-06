package com.ce.model.second.base;

import com.jfinal.plugin.activerecord.Model;
import com.jfinal.plugin.activerecord.IBean;

/**
 * Generated by JFinal, do not modify this file.
 */
@SuppressWarnings({"serial", "unchecked"})
public abstract class BaseUser<M extends BaseUser<M>> extends Model<M> implements IBean {

	public M setUserId(java.lang.String userId) {
		set("userId", userId);
		return (M)this;
	}
	
	public java.lang.String getUserId() {
		return getStr("userId");
	}

	public M setUserName(java.lang.String userName) {
		set("userName", userName);
		return (M)this;
	}
	
	public java.lang.String getUserName() {
		return getStr("userName");
	}

	public M setNickname(java.lang.String nickname) {
		set("nickname", nickname);
		return (M)this;
	}
	
	public java.lang.String getNickname() {
		return getStr("nickname");
	}

	public M setPsd(java.lang.String psd) {
		set("psd", psd);
		return (M)this;
	}
	
	public java.lang.String getPsd() {
		return getStr("psd");
	}

	public M setIsTeacher(java.lang.Integer isTeacher) {
		set("isTeacher", isTeacher);
		return (M)this;
	}
	
	public java.lang.Integer getIsTeacher() {
		return getInt("isTeacher");
	}

	public M setGender(java.lang.Integer gender) {
		set("gender", gender);
		return (M)this;
	}
	
	public java.lang.Integer getGender() {
		return getInt("gender");
	}

	public M setDepartId(java.lang.Integer departId) {
		set("departId", departId);
		return (M)this;
	}
	
	public java.lang.Integer getDepartId() {
		return getInt("departId");
	}

	public M setFaceIcon(java.lang.String faceIcon) {
		set("faceIcon", faceIcon);
		return (M)this;
	}
	
	public java.lang.String getFaceIcon() {
		return getStr("faceIcon");
	}

	public M setHomelandP(java.lang.String homelandP) {
		set("homelandP", homelandP);
		return (M)this;
	}
	
	public java.lang.String getHomelandP() {
		return getStr("homelandP");
	}

	public M setHomelandC(java.lang.String homelandC) {
		set("homelandC", homelandC);
		return (M)this;
	}
	
	public java.lang.String getHomelandC() {
		return getStr("homelandC");
	}

	public M setBirthday(java.util.Date birthday) {
		set("birthday", birthday);
		return (M)this;
	}
	
	public java.util.Date getBirthday() {
		return get("birthday");
	}

	public M setTelephone(java.lang.String telephone) {
		set("telephone", telephone);
		return (M)this;
	}
	
	public java.lang.String getTelephone() {
		return getStr("telephone");
	}

	public M setHomepage(java.lang.String homepage) {
		set("homepage", homepage);
		return (M)this;
	}
	
	public java.lang.String getHomepage() {
		return getStr("homepage");
	}

	public M setHobbies(java.lang.String hobbies) {
		set("hobbies", hobbies);
		return (M)this;
	}
	
	public java.lang.String getHobbies() {
		return getStr("hobbies");
	}

	public M setMotto(java.lang.String motto) {
		set("motto", motto);
		return (M)this;
	}
	
	public java.lang.String getMotto() {
		return getStr("motto");
	}

	public M setEmail(java.lang.String email) {
		set("email", email);
		return (M)this;
	}
	
	public java.lang.String getEmail() {
		return getStr("email");
	}

	public M setExperience(java.lang.Integer experience) {
		set("experience", experience);
		return (M)this;
	}
	
	public java.lang.Integer getExperience() {
		return getInt("experience");
	}

}
