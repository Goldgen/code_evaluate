package com.ce.util;

import com.ce.vo.FileInfo;
import com.jfinal.kit.PathKit;

import java.io.IOException;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class FileUtil {

    private static String getRealPath(String path) {
        return PathKit.getWebRootPath() + "/upload/" + path;
    }

    public static String readFile(String filePath) throws IOException {
        Path path = Paths.get(getRealPath(filePath));
        return new String(Files.readAllBytes(path));
    }

    public static void deleteFile(String filePath) throws IOException {
        Path path = Paths.get(getRealPath(filePath));
        Files.deleteIfExists(path);
    }

    public static void createFile(String filePath, String content) throws IOException {
        Path path = Paths.get(getRealPath(filePath));
        Files.write(path, content.getBytes());
    }

    public static void createDirectory(String directoryPath) throws IOException {
        Path path = Paths.get(getRealPath(directoryPath));
        if (!Files.exists(path))
            Files.createDirectory(path);
    }

    public static boolean compareFileWithString(String filePath, String compareStr) throws IOException {
        Path path = Paths.get(getRealPath(filePath));
        String fileStr = new String(Files.readAllBytes(path));
        fileStr = deleteLastEnter(fileStr);
        compareStr = deleteLastEnter(compareStr);
        compareStr = replaceUseless(compareStr);

//        List<String> fileLineList = Files.readAllLines(path);
//        List<String> compareLineList = Arrays.asList(compareStr.split("\n"));
//        if (fileLineList.size() != compareLineList.size()) return false;
//        else {
//            for (int i = 0; i < fileLineList.size(); i++) {
//                if (!fileLineList.get(i).contains(compareLineList.get(i)))
//                    return false;
//            }
//        }
//        return true;
        return fileStr.equals(compareStr);
    }

    //返回一个路径下面所有文件夹的名称（忽略非学号的）
    public static List<FileInfo> getSubDirectoryAndFile(String directoryPath) throws IOException {
        List<FileInfo> fileInfoList = new ArrayList<>();
        Files.walkFileTree(Paths.get(getRealPath(directoryPath)), new SimpleFileVisitor<Path>() {
            @Override
            public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) throws IOException {
                //访问文件夹之前调用
                if (!dir.endsWith(directoryPath)) {
                    String folderName = dir.getFileName().toString();
                    if (isNumeric(folderName)) {
                        Files.walkFileTree(dir, new SimpleFileVisitor<Path>() {
                            @Override
                            public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) {
                                String fileName = file.getFileName().toString();
                                String prefix = fileName.substring(0, fileName.indexOf('.'));
                                String suffix = fileName.substring(fileName.indexOf('.') + 1);
                                if ((suffix.equals("c") || suffix.equals("cpp")) && isNumeric(prefix)) {
                                    FileInfo fileInfo = new FileInfo(fileName, prefix, suffix, folderName);
                                    fileInfoList.add(fileInfo);
                                    return FileVisitResult.CONTINUE;
                                }
                                return FileVisitResult.CONTINUE;
                            }
                        });
                    }
                }
                return FileVisitResult.CONTINUE;
            }
        });
        return fileInfoList;
    }


    //返回一个路径下面所有c或c++文件的名称（只取前缀，忽略非题号的）
    public static List<FileInfo> getCOrCppFilesName(String directoryPath) throws IOException {
        List<FileInfo> fileInfoList = new ArrayList<>();
        Files.walkFileTree(Paths.get(getRealPath(directoryPath)), new SimpleFileVisitor<Path>() {
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
        });
        return fileInfoList;
    }

    //删除文件夹以及下面所有的文件
    public static void deleteDirectory(String directoryPath) throws IOException {
        Files.walkFileTree(Paths.get(getRealPath(directoryPath)), new SimpleFileVisitor<Path>() {
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

    private static String deleteLastEnter(String str) {
        if (str.length() >= 1) {
            String last = str.substring(str.length() - 1);
            if (last.equals("\n")) {
                str = str.substring(0, str.length() - 1);
            }
        }
        return str;
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