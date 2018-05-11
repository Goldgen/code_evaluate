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


    public static void main(String[] args) throws Exception {
//        Pattern pattern = Pattern.compile("\\./(.*?)/1\\.c consists for (.*?) % of \\./(.*?)/1\\.c");
//        Matcher matcher = pattern.matcher("./10142510168/1.c consists for 100 % of ./10142510166/1.c material\n" +
//                "./10142510166/1.c consists for 100 % of ./10142510168/1.c material");
//        //System.out.println(matcher.matches());
//        while (matcher.find()){
//            System.out.println(matcher.group(1));
//            System.out.println(matcher.group(2));
//            System.out.println(matcher.group(3));
//        }

//        CompileUtil.executeShellCmd("sh /home/olin/Documents/IdeaProjects/code_evaluate/src/main/webapp/shell/evaluate.sh /home/olin/Documents/IdeaProjects/code_evaluate/src/main/webapp/upload/18_04_10_16_12_28224921aa-acbe-4dbb-8a69-ef8f11281ba4/10142510168 1.c 1_result.json");

        String[] strs = new String[]{"dog","racecar","car"};
        System.out.println(longestCommonPrefix(strs));

    }


    public static String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) return "";
        StringBuilder sb = new StringBuilder();
        for (int i = 0; ; i++) {
            if (i >= strs[0].length()) return sb.toString();
            char c = strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (i >= strs[j].length()) return sb.toString();
                if (c != strs[j].charAt(i)) return sb.toString();
            }
            sb.append(c);
        }
    }

    public static void addTxtFile(String filePath, String content) throws IOException {
        Path path = Paths.get(filePath);
        Files.write(path, content.getBytes(), StandardOpenOption.CREATE);
    }

    public static boolean compareFileWithString(String filePath, String compareStr) throws IOException {
        String fileStr = readFile(filePath);
        compareStr = replaceUseless(compareStr);
        return fileStr.contains(compareStr);
    }

    //返回一个路径下面所有文件夹的名称（忽略非学号的）
    public static List<String> getSubDirectoryName(String directoryPath) throws IOException {
        List<String> folderNameList = new ArrayList<>();
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
        LogKit.info("获得的所有学号" + folderNameList);
        return folderNameList;
    }

    //返回一个路径下面所有c或c++文件的名称（只取前缀，忽略非题号的）
    public static List<FileInfo> getCOrCppFilesName(String directoryPath) throws IOException {
        List<FileInfo> fileInfoList = new ArrayList<>();
        Files.walkFileTree(Paths.get(directoryPath), new FileVisitor<Path>() {
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

    public static String readFile(String filePath) throws IOException {
        String content = "";
        Path path = Paths.get(filePath);
        content = new String(Files.readAllBytes(path));
        return content;
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