#!/usr/bin/env bash
# $1-源文件夹 $2-复制文件夹 $3-压缩文件名
cp -r $1 $2
cd $1
cd ..
zip -r $3.zip $3 --exclude *.txt* --exclude *.out* --exclude *.json*
rm -r $2