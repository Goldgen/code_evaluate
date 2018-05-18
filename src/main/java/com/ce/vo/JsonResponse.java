package com.ce.vo;

public class JsonResponse<T> {

    /**
     * 服务器响应数据
     */
    private T payload;

    /**
     * 请求是否成功
     */
    private boolean success;

    /**
     * 错误信息
     */
    private String msg;

    /**
     * 状态码
     */
    private int code = -1;

    /**
     * 服务器响应时间
     */
    private long timestamp;

    public JsonResponse() {
        this.timestamp = System.currentTimeMillis() / 1000;
    }

    public JsonResponse(boolean success) {
        this.timestamp = System.currentTimeMillis() / 1000;
        this.success = success;
    }

    public JsonResponse(boolean success, T payload) {
        this.timestamp = System.currentTimeMillis() / 1000;
        this.success = success;
        this.payload = payload;
    }

    public JsonResponse(boolean success, T payload, int code) {
        this.timestamp = System.currentTimeMillis() / 1000;
        this.success = success;
        this.payload = payload;
        this.code = code;
    }

    public JsonResponse(boolean success, String msg) {
        this.timestamp = System.currentTimeMillis() / 1000;
        this.success = success;
        this.msg = msg;
    }

    public JsonResponse(boolean success, String msg, int code) {
        this.timestamp = System.currentTimeMillis() / 1000;
        this.success = success;
        this.msg = msg;
        this.code = code;
    }

    public T getPayload() {
        return payload;
    }

    public void setPayload(T payload) {
        this.payload = payload;
    }

    public boolean isSuccess() {
        return success;
    }

    public void setSuccess(boolean success) {
        this.success = success;
    }

    public String getMsg() {
        return msg;
    }

    public void setMsg(String msg) {
        this.msg = msg;
    }

    public int getCode() {
        return code;
    }

    public void setCode(int code) {
        this.code = code;
    }

    public long getTimestamp() {
        return timestamp;
    }

    public void setTimestamp(long timestamp) {
        this.timestamp = timestamp;
    }

    public static JsonResponse ok() {
        return new JsonResponse(true);
    }

    public static <T> JsonResponse ok(T payload) {
        return new JsonResponse(true, payload);
    }

    public static <T> JsonResponse ok(int code) {
        return new JsonResponse(true, null, code);
    }

    public static <T> JsonResponse ok(T payload, int code) {
        return new JsonResponse(true, payload, code);
    }


    public static JsonResponse fail() {
        return new JsonResponse(false);
    }

    public static JsonResponse fail(String msg) {
        return new JsonResponse(false, msg);
    }

    public static JsonResponse fail(int code) {
        return new JsonResponse(false, null, code);
    }

    public static JsonResponse fail(int code, String msg) {
        return new JsonResponse(false, msg, code);
    }

}