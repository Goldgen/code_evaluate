package com.ce.vo;

public class FileInfo {

    public String fileName;
    public String prefix;
    public String suffix;
    public String fatherDirectory;

    public FileInfo() {
    }

    public FileInfo(String fileName, String prefix, String suffix) {
        this.fileName = fileName;
        this.prefix = prefix;
        this.suffix = suffix;
    }

    public FileInfo(String fileName, String prefix, String suffix, String fatherDirectory) {
        this.fileName = fileName;
        this.prefix = prefix;
        this.suffix = suffix;
        this.fatherDirectory = fatherDirectory;
    }
}
