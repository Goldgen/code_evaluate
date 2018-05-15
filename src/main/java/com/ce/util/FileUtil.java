package com.ce.util;

import com.ce.vo.FileInfo;
import com.jfinal.kit.LogKit;

import java.io.IOException;
import java.math.BigInteger;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class FileUtil {

    public static void createFile(String filePath, String content) throws IOException {
        Path path = Paths.get(filePath);
        Files.write(path, content.getBytes());
    }

    public static void createDirectory(String directoryPath) throws IOException {
        Path path = Paths.get(directoryPath);
        if (!Files.exists(path))
            Files.createDirectory(path);
    }


    public static void addTxtFile(String filePath, String content) throws IOException {
        Path path = Paths.get(filePath);
        Files.write(path, content.getBytes(), StandardOpenOption.CREATE);
    }

    public static boolean compareFileWithString(String filePath, String compareStr) throws IOException {
        List<String> fileLineList = readFileLines(filePath);
        compareStr = replaceUseless(compareStr);
        List<String> compareLineList = Arrays.asList(compareStr.split("\n"));
        if (fileLineList.size() != compareLineList.size()) return false;
        else {
            for (int i = 0; i < fileLineList.size(); i++) {
                if (!fileLineList.get(i).contains(compareLineList.get(i)))
                    return false;
            }
        }
        return true;
    }

    //返回一个路径下面所有文件夹的名称（忽略非学号的）
    public static List<String> getSubDirectoryName(String directoryPath) throws IOException {
        List<String> folderNameList = new ArrayList<>();
        Files.walkFileTree(Paths.get(directoryPath), new FileVisitor<Path>() {
            @Override
            public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) {
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
            public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) {
                // 访问文件调用
                //System.out.println(file);
                return FileVisitResult.CONTINUE;
            }

            @Override
            public FileVisitResult visitFileFailed(Path file, IOException exc) {
                // 访问文件失败时调用
                return FileVisitResult.CONTINUE;
            }

            @Override
            public FileVisitResult postVisitDirectory(Path dir, IOException exc) {
                // 访问文件夹之后调用
                return FileVisitResult.CONTINUE;
            }
        });
        LogKit.info("获得的所有学号" + folderNameList);
        return folderNameList;
    }

    //返回一个路径下面所有c或c++文件的名称（只取前缀，忽略非题号的）
    public static List<FileInfo> getCOrCppFilesName(String directoryPath) throws IOException {
        List<FileInfo> fileInfoList = new ArrayList<>();
        Files.walkFileTree(Paths.get(directoryPath), new FileVisitor<Path>() {
            @Override
            public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) {
                //访问文件夹之前调用
                return FileVisitResult.CONTINUE;
            }

            @Override
            public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) {
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
            public FileVisitResult visitFileFailed(Path file, IOException exc) {
                // 访问文件失败时调用
                return FileVisitResult.CONTINUE;
            }

            @Override
            public FileVisitResult postVisitDirectory(Path dir, IOException exc) {
                // 访问文件夹之后调用
                return FileVisitResult.CONTINUE;
            }
        });
        return fileInfoList;
    }

    //删除文件夹以及下面所有的文件
    public static void deleteDirectory(String directoryPath) throws IOException {
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
            Pattern p = Pattern.compile("[\t\r]");
            Matcher m = p.matcher(str);
            dest = m.replaceAll("");
        }
        return dest;
    }

    public static List<String> readFileLines(String filePath) throws IOException {
        Path path = Paths.get(filePath);
        return Files.readAllLines(path);
    }

    public static String readFile(String filePath) throws IOException {
        Path path = Paths.get(filePath);
        return new String(Files.readAllBytes(path));
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

}