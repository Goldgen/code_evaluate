#!/usr/bin/env bash
# $1 作业id $2 学号id $3文件前缀
cd src/main/webapp/upload/$1/$2
gcc $3.c -o $3.out
