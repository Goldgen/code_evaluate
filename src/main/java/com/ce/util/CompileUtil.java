package com.ce.util;

import com.ce.config.MyConstants;
import com.ce.vo.ShellReturnInfo;
import com.jfinal.kit.LogKit;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class CompileUtil {

    private static String getRealPath(String path) {
        return MyConstants.uploadPath + path;
    }

    public static ShellReturnInfo isCompilePass(String fatherFilePath, String fileName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String cmd = "sh " + MyConstants.shellPath + "compile.sh " + fatherFilePath + " " + fileName;
        return executeShellCmd(cmd);
    }

    public static void execute(String fatherFilePath, String fileName, String inputFileName, String outputFileName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String cmd = "sh " + MyConstants.shellPath + "execute.sh " + fatherFilePath + " " + fileName + " " + inputFileName + " " + outputFileName;
        executeShellCmd(cmd);
    }

    public static void unZipAll(String fatherFilePath, String oldZipFileName, String newFolderName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        executeShellCmd("sh " + MyConstants.shellPath + "unzipAll.sh " + fatherFilePath + " " + oldZipFileName + " " + newFolderName);
    }

    public static void zip(String filePath, String copyFilePath, String zipName) throws IOException, InterruptedException {
        filePath = getRealPath(filePath);
        copyFilePath = getRealPath(copyFilePath);
        executeShellCmd("sh " + MyConstants.shellPath + "packcode.sh " + filePath + " " + copyFilePath + " " + zipName);
    }

    public static void unZip(String fatherFilePath, String oldZipFileName, String newFolderName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        executeShellCmd("sh " + MyConstants.shellPath + "unzip.sh " + fatherFilePath + " " + oldZipFileName + " " + newFolderName);
    }

    public static void evaluate(String fatherFilePath, String fileName, String resultFileName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String cmd = "sh " + MyConstants.shellPath + "evaluate.sh " + fatherFilePath + " " + fileName + " " + resultFileName;
        executeShellCmd(cmd);
    }

    public static void similarityTest(String fatherFilePath, int questionNo, String questionFilesPath) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String[] cmds = new String[]{MyConstants.shellPath + "similarityTest.sh", fatherFilePath, String.valueOf(questionNo), questionFilesPath};
        executeShellCmd(cmds, MyConstants.shellPath + "similarityTest.sh");
    }

    //执行shell命令，返回执行中是否有错误
    private static ShellReturnInfo executeShellCmd(String cmd) throws InterruptedException, IOException {
        ShellReturnInfo shellReturnInfo = new ShellReturnInfo();
        String errStr = "";
        Process process = Runtime.getRuntime().exec(cmd);
        process.waitFor();
        BufferedReader bufferError = new BufferedReader(new InputStreamReader(process.getErrorStream()));
        StringBuilder errBuilder = new StringBuilder();
        while (true) {
            String temp = bufferError.readLine();
            if (temp == null) {
                break;
            } else {
                if (temp.contains("^") && temp.contains("~")) break;
                errBuilder.append(temp).append("\n");
            }
        }
        bufferError.close();
        errStr = errBuilder.toString();
        boolean isPass = errStr.isEmpty() || !errStr.contains("error");
        if (!isPass) {
            LogKit.error("执行命令：" + cmd + "出错,错误为：" + errStr);
        }
        process.destroy();

        shellReturnInfo.errorInfo = errStr;
        shellReturnInfo.isPass = isPass;
        return shellReturnInfo;
    }

    private static ShellReturnInfo executeShellCmd(String[] cmds, String scriptPath) throws IOException, InterruptedException {
        ShellReturnInfo shellReturnInfo = new ShellReturnInfo();
        String errStr = "";
        //解决脚本没有执行权限
        ProcessBuilder builder = new ProcessBuilder("/bin/chmod", "755", scriptPath);
        Process ps = builder.start();
        ps.waitFor();

        Process process = Runtime.getRuntime().exec(cmds);
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
        boolean isPass = errStr.isEmpty() || !errStr.contains("error");
        if (!isPass) {
            LogKit.error("执行命令：" + Arrays.toString(cmds) + "出错,错误为：" + errStr);
        }
        process.destroy();
        ps.destroy();
        shellReturnInfo.errorInfo = errStr;
        shellReturnInfo.isPass = isPass;
        return shellReturnInfo;
    }

}

