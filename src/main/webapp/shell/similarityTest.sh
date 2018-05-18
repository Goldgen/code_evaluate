#!/bin/bash
# $1-作业文件夹 $2-问题题号 $3-文件列表字符串 $4-文件类型
cd $1
sim_c -p -o similarity$2_$4.txt $3

