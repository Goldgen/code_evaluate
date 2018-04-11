#!/bin/bash
# $1-作业文件夹 $2-问题题号 $3-文件列表字符串
cd $1
sim_c -p -o similarity$2.txt $3

