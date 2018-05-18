#!/usr/bin/env bash
# $1-学号文件夹路径 $2-文件名 $3-输出json文件名
cd $1
oclint -rc SHORT_VARIABLE_NAME=1 -report-type json -o $3 -no-analytics $2 -- -c

