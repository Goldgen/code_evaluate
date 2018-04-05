#!/usr/bin/env bash
# $1-学号文件夹路径 $2-文件名
cd $1
filename="${2%.*}"
extension="${2##*.}"
if [ "${extension}"x = "c"x ]; then
    gcc $2 -o ${filename}.out
fi
if [ "${extension}"x = "cpp"x ]; then
    g++ $2 prefix -o  ${filename}.out
fi

