package com.ce.util;

import com.alibaba.fastjson.JSON;
import com.ce.config.MyConstants;
import com.ce.model.Violation;
import com.ce.vo.FileInfo;
import com.ce.vo.OclintInfoVo;
import com.jfinal.kit.PathKit;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class FileUtil {


    public static void main(String[] args) {
        int prices[] = {1, 1, 2, 3};
        int profit = 0;
        int len = prices.length;
        for (int i = 0; i < len; i++) {
            int temp = prices[i];
            if (prices[i + 1] > temp) {
                profit += prices[i + 1] - prices[i];
            }
        }
        for (int i = 0; i < len; i++) {

        }


        //executeShellCmd("sh src/main/webapp/shell/compile.sh src/main/webapp/upload/126/10142510169 1.c");

    }

    public static void addTxtFile(String filePath, String content) {
        Path path = Paths.get(filePath);
        try {
            Files.createFile(path);
            Files.write(path, content.getBytes());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static boolean compareFileWithString(String filePath, String compareStr) {
        String fileStr = replaceUseless(readFile(filePath));
        compareStr = replaceUseless(compareStr);
        if (fileStr.equals(compareStr)) {
            System.out.println(filePath + "与答案比对结果相同");
            return true;
        } else {
            System.out.println(filePath + "与答案比对结果不同");
            return false;
        }
    }

    //返回一个路径下面所有文件夹的名称（忽略非学号的）
    public static List<String> getSubDirectoryName(String directoryPath) {
        List<String> folderNameList = new ArrayList<>();
        try {
            Files.walkFileTree(Paths.get(directoryPath), new FileVisitor<Path>() {
                @Override
                public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) throws IOException {
                    //访问文件夹之前调用
                    if (!dir.endsWith(directoryPath)) {
                        String folderName = dir.getFileName().toString();
                        if (isNumeric(folderName)) {
                            folderNameList.add(folderName);
                        }
                    }
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) throws IOException {
                    // 访问文件调用
                    //System.out.println(file);
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult visitFileFailed(Path file, IOException exc) throws IOException {
                    // 访问文件失败时调用
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult postVisitDirectory(Path dir, IOException exc) throws IOException {
                    // 访问文件夹之后调用
                    return FileVisitResult.CONTINUE;
                }
            });
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("获得的所有学号" + folderNameList);
        return folderNameList;
    }

    //返回一个路径下面所有c或c++文件的名称（只取前缀，忽略非题号的）
    public static List<FileInfo> getCOrCppFilesName(String directoryPath, String studentId) {
        String finalPath = directoryPath + studentId;
        List<FileInfo> fileInfoList = new ArrayList<>();
        try {
            Files.walkFileTree(Paths.get(finalPath), new FileVisitor<Path>() {
                @Override
                public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) throws IOException {
                    //访问文件夹之前调用
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) throws IOException {
                    // 访问文件调用
                    String fileName = file.getFileName().toString();
                    String prefix = fileName.substring(0, fileName.indexOf('.'));
                    String suffix = fileName.substring(fileName.indexOf('.') + 1);
                    if ((suffix.equals("c") || suffix.equals("cpp")) && isNumeric(prefix)) {
                        FileInfo fileInfo = new FileInfo(fileName, prefix, suffix);
                        fileInfoList.add(fileInfo);
                    }
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult visitFileFailed(Path file, IOException exc) throws IOException {
                    // 访问文件失败时调用
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult postVisitDirectory(Path dir, IOException exc) throws IOException {
                    // 访问文件夹之后调用
                    return FileVisitResult.CONTINUE;
                }
            });
        } catch (IOException e) {
            e.printStackTrace();
        }
        return fileInfoList;
    }

    //删除文件夹以及下面所有的文件
    public static void deleteDirectory(String directoryPath) {
        try {
            Files.walkFileTree(Paths.get(directoryPath), new SimpleFileVisitor<Path>() {
                @Override
                public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) throws IOException {
                    Files.delete(file);
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public FileVisitResult postVisitDirectory(Path dir, IOException exc) throws IOException {
                    Files.delete(dir);
                    return super.postVisitDirectory(dir, exc);
                }
            });
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    //判断一个字符串是否为数字
    private static boolean isNumeric(String str) {
        Pattern pattern = Pattern.compile("^[-\\+]?[\\d]*$");
        return pattern.matcher(str).matches();
    }

    //去除字符串中多余的符号
    private static String replaceUseless(String str) {
        String dest = "";
        if (str != null) {
            Pattern p = Pattern.compile("[\t\r\n]");
            Matcher m = p.matcher(str);
            dest = m.replaceAll("");
        }
        return dest;
    }

    public static String readFile(String filePath) {
        String content = "";
        Path path = Paths.get(filePath);
        try {
            content = new String(Files.readAllBytes(path));
        } catch (Exception e) {
            e.printStackTrace();
        }
        return content;
    }

    /**
     * new文件名= 时间 + 全球唯一编号
     *
     * @param fileName old文件名
     * @return new文件名
     */
    public static String generateFileName(String fileName) {
        //时间
        DateFormat df = new SimpleDateFormat("yy_MM_dd_HH_mm_ss");
        String formatDate = df.format(new Date());
        //全球唯一编号
        String uuid = UUID.randomUUID().toString();
        int position = fileName.lastIndexOf(".");
        String extension = fileName.substring(position);
        return formatDate + uuid + extension;
    }

    /**
     * new文件夹名= 时间 + 全球唯一编号
     *
     * @return new文件夹名
     */
    public static String generateFolderName() {
        //时间
        DateFormat df = new SimpleDateFormat("yy_MM_dd_HH_mm_ss");
        String formatDate = df.format(new Date());
        //全球唯一编号
        String uuid = UUID.randomUUID().toString();
        return formatDate + uuid;
    }

    //执行shell命令，返回执行中是否有错误
    private static boolean executeShellCmd(String cmd) {
        String errStr = "";
        try {
            Process process = Runtime.getRuntime().exec(cmd);
            process.waitFor();
            BufferedReader bin = new BufferedReader(new InputStreamReader(process.getInputStream()));
            StringBuilder outputBuilder = new StringBuilder();
            while (true) {
                String temp = bin.readLine();
                if (temp == null) {
                    break;
                } else {
                    outputBuilder.append(temp);
                }
            }
            bin.close();
            String outputStr = outputBuilder.toString();
            System.out.println(outputStr);

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
            System.out.println(errStr);
            process.destroy();
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("执行命令：" + cmd + "出错");
            return false;
        }
        return errStr.isEmpty();
    }
}