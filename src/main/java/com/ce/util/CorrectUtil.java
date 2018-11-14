package com.ce.util;

import com.ce.vo.ShellReturnInfo;
import com.jfinal.kit.LogKit;
import com.jfinal.kit.PathKit;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.concurrent.TimeUnit;

public class CorrectUtil {

    private static final String shellPath = PathKit.getWebRootPath() + "/shell/";

    private static String getRealPath(String path) {
        return PathKit.getWebRootPath() + "/upload/" + path;
    }

    public static ShellReturnInfo isCompilePass(String fatherFilePath, String fileName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String cmd = "sh " + shellPath + "compile.sh " + fatherFilePath + " " + fileName;
        return executeShellCmd(cmd, -1);
    }

    public static ShellReturnInfo execute(String fatherFilePath, String fileName, String inputFileName, String outputFileName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String cmd = "sh " + shellPath + "execute.sh " + fatherFilePath + " " + fileName + " " + inputFileName + " " + outputFileName;
        //设置1秒运行超时
        return executeShellCmd(cmd, 1);
    }

    public static void zip(String filePath, String copyFilePath, String zipName) throws IOException, InterruptedException {
        filePath = getRealPath(filePath);
        copyFilePath = getRealPath(copyFilePath);
        executeShellCmd("sh " + shellPath + "packcode.sh " + filePath + " " + copyFilePath + " " + zipName, -1);
    }

    public static void evaluate(String fatherFilePath, String fileName, String resultFileName) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String cmd = "sh " + shellPath + "evaluate.sh " + fatherFilePath + " " + fileName + " " + resultFileName;
        executeShellCmd(cmd, -1);
    }

    public static void similarityTest(String fatherFilePath, int questionNo, String questionFilesPath, String type) throws IOException, InterruptedException {
        fatherFilePath = getRealPath(fatherFilePath);
        String[] cmds = new String[]{shellPath + "similarityTest.sh", fatherFilePath, String.valueOf(questionNo), questionFilesPath, type};
        executeShellCmd(cmds, shellPath + "similarityTest.sh");
    }

    //执行shell命令，返回执行中是否有错误
    private static ShellReturnInfo executeShellCmd(String cmd, int seconds) throws InterruptedException, IOException {
        ShellReturnInfo shellReturnInfo = new ShellReturnInfo();
        String errStr = "";
        Process process = Runtime.getRuntime().exec(cmd);
        if (seconds <= 0) {
            process.waitFor();
        } else {
            if (!process.waitFor(seconds, TimeUnit.SECONDS)) {
                process.children().forEach(ProcessHandle::destroy);
                process.destroy();
                System.out.println("执行命令：" + cmd + "超时");
                shellReturnInfo.errorInfo = "运行超过" + seconds + "秒";
                shellReturnInfo.isPass = false;
                return shellReturnInfo;
            }
            System.out.println("执行命令：" + cmd + "正常");
        }
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

