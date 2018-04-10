package com.ce.util;

import com.ce.config.MyConstants;
import com.ce.vo.ShellReturnInfo;
import com.jfinal.kit.LogKit;
import com.jfinal.kit.PathKit;

import java.io.*;

public class CompileUtil {


    public static ShellReturnInfo isCompilePass(String fatherFilePath, String fileName) {
        String cmd = "sh " + MyConstants.shellPath + "compile.sh " + fatherFilePath + " " + fileName;
        System.out.println("编译命令是：" + cmd);
        return executeShellCmd(cmd);
    }

    public static void execute(String fatherFilePath, String fileName, String inputFileName, String outputFileName) {
        String cmd = "sh " + MyConstants.shellPath + "execute.sh " + fatherFilePath + " " + fileName + " " + inputFileName + " " + outputFileName;
        System.out.println("执行命令是：" + cmd);
        executeShellCmd(cmd);
    }

    public static void unZipAll(String fatherFilePath, String oldZipFileName, String newFolderName) {
        executeShellCmd("sh " + MyConstants.shellPath + "unzipAll.sh " + fatherFilePath + " " + oldZipFileName + " " + newFolderName);
    }

    public static void evaluate(String fatherFilePath, String fileName, String resultFileName) {
        String cmd = "sh " + MyConstants.shellPath + "evaluate.sh " + fatherFilePath + " " + fileName + " " + resultFileName;
        System.out.println("执行命令是：" + cmd);
        executeShellCmd(cmd);
    }

    public static void similarityTest(String fatherFilePath, int questionNo, String questionFilesPath) {
        String cmd = "sh " + MyConstants.shellPath + "similarityTest.sh " + fatherFilePath + " " + questionNo + " \"" + questionFilesPath + "\"";
        System.out.println("执行命令是：" + cmd);
        executeShellCmd(cmd);
    }

    //执行shell命令，返回执行中是否有错误
    public static ShellReturnInfo executeShellCmd(String cmd) {
        ShellReturnInfo shellReturnInfo = new ShellReturnInfo();
        String errStr = "";
        try {
            Process process = Runtime.getRuntime().exec(cmd);
            process.waitFor();

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
            if (!errStr.isEmpty()) {
                LogKit.error("执行命令：" + cmd + "出错,错误为：" + errStr);
            }
            process.destroy();
        } catch (Exception e) {
            e.printStackTrace();
            LogKit.error("执行命令：" + cmd + "出错");
        }
        shellReturnInfo.errorInfo = errStr;
        shellReturnInfo.isPass = errStr.isEmpty();
        return shellReturnInfo;
    }

}

