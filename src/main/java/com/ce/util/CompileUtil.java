package com.ce.util;

import java.io.*;

public class CompileUtil {

    public static boolean isCompilePass(String assignmentId, String stuNum, String questionId) {
        String prefix = questionId;
        String suffix = "c";
        String cmd;
        switch (suffix) {
            case "c":
                cmd = "sh compile.sh " + assignmentId + " " + stuNum + " " + prefix;
                break;
            case "cpp":
                cmd = "g++ " + prefix + ".cpp";
                break;
            default:
                return false;
        }
        System.out.println("编译命令是：" + cmd);
        return executeShellCmd(cmd);
    }

    public static void execute(String assignmentId, String stuNum, String questionId, String testCaseId) {
        String cmd = "sh execute.sh " + assignmentId + " " + stuNum + " " + questionId + " " + testCaseId;
        System.out.println("执行命令是：" + cmd);
        executeShellCmd(cmd);
    }

    public static void unZipAll(String zipFileName) {
        executeShellCmd("sh unzipAll.sh " + zipFileName);
    }

    public static void evaluate(String assignmentId, String stuNum, String questionId) {
        String cmd = "sh evaluate.sh " + assignmentId + " " + stuNum + " " + questionId ;
        System.out.println("执行命令是：" + cmd);
        executeShellCmd(cmd);
    }

    //执行shell命令，返回执行中是否有错误
    private static boolean executeShellCmd(String cmd) {
        String errStr = "";
        try {
            Process process = Runtime.getRuntime().exec(cmd);
            process.waitFor();
//            BufferedReader bin = new BufferedReader(new InputStreamReader(process.getInputStream()));
//            while (true) {
//                if (bin.readLine() == null) {
//                    break;
//                }
//            }
//            bin.close();

            BufferedReader bufferError = new BufferedReader(new InputStreamReader(process.getErrorStream()));
            StringBuilder errBuilder = new StringBuilder();
            while (true) {
                String temp = bufferError.readLine();
                if (temp == null) {
                    break;
                } else {
                    errBuilder.append(temp);
                }
            }
            bufferError.close();
            errStr = errBuilder.toString();
            process.destroy();
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("执行命令：" + cmd + "出错");
            return false;
        }
        return errStr.isEmpty();
    }
}

