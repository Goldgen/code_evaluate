#!/usr/bin/env bash
# $1-作业id $2-学号id $3-文件前缀
cd src/main/webapp/upload/$1/$2
oclint -report-type json -o $3_result.json -no-analytics $3.c -- -c

