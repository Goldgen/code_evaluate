#!/usr/bin/env bash
# $1-作业id $2-学号id $3-作业下题号 $4-测试用例id
cd src/main/webapp/upload/$1/$2
./$3.out < ../$3_input_$4.txt > $3_output_$4.txt
#rm $3.out

