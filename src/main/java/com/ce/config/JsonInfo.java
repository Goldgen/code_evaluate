package com.ce.config;

import java.io.Serializable;

/**
 * File name：BaseJson
 * Description：JSON基础结构，包含响应码和响应消息，反馈给前台页面
 */
public class JsonInfo implements Serializable, Cloneable {

    private int resCode;//响应代码
    private String errorMsg;//错误消息
    private Object data;

    public JsonInfo() {
        resCode = 1;
        data = null;
    }

    public JsonInfo(int resCode) {
        this.resCode = resCode;
        data = "";
    }

    public int getResCode() {
        return resCode;
    }

    public void setResCode(int resCode) {
        this.resCode = resCode;
    }

    public String getErrorMsg() {
        return errorMsg;
    }

    public void setErrorMsg(String errorMsg) {
        this.errorMsg = errorMsg;
    }

    public Object getData() {
        return data;
    }

    public void setData(Object data) {
        this.data = data;
    }
}
