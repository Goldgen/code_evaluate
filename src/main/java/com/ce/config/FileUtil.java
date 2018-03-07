package com.ce.config;

import com.alibaba.fastjson.JSON;
import com.ce.model.Violation;
import com.ce.vo.OclintInfoVo;

import java.io.IOException;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * 遍历目录下所有的java文件，如果有子目录，会继续遍历。
 *
 * @author Felix
 */
public class FileUtil {

    public static final String basePath = "./src/main/webapp/upload/";

    public static void main(String[] args) throws Exception {

        String content = readFile("result.json");
        OclintInfoVo info= JSON.parseObject(content, OclintInfoVo.class);
        int a=1;

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
    public static List<String> getSubDirectoryName(String assignmentId) {
        String finalPath = basePath + assignmentId;
        List<String> folderNameList = new ArrayList<>();
        try {
            Files.walkFileTree(Paths.get(finalPath), new FileVisitor<Path>() {
                @Override
                public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) throws IOException {
                    //访问文件夹之前调用
                    if (!dir.endsWith(finalPath)) {
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

    //返回一个路径下面所有c文件的名称（只取前缀，忽略非题号的）
    public static List<String> getCFilesName(String assignmentId, String studentId) {
        String finalPath = basePath + assignmentId + "/" + studentId;
        List<String> cFileNameList = new ArrayList<>();
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
                    if (fileName.endsWith(".c") && isNumeric(prefix)) {
                        cFileNameList.add(prefix);
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
        System.out.println(assignmentId + "作业号下" + studentId + "学号下的所有题号文件" + cFileNameList);
        return cFileNameList;
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
        } catch (IOException e) {
            e.printStackTrace();
        }
        return content;
    }

}