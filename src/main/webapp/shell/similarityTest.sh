#!/bin/bash
# $1-作业文件夹 $2-问题题号 $3-文件列表字符串 $4-文件类型
cd $1
if [ "$4" = "c" ]; then
    sim_c -p -o similarity$2_c.txt $3
fi
if [ "$4" = "cpp" ]; then
    sim_c++ -p -o similarity$2_cpp.txt $3
fi


