#!/usr/bin/env bash
if [ ! -d $1 ]; then
  mkdir $1
fi
cd $1/..
mv $2 $1
cd $1
if [ -d $3 ]; then
  rm -r $3
fi
unzip -o $2 | mv `unzip -l $2 | awk '{if(NR == 4){ print $4}}'` $3
if [ -d "__MACOSX" ]
then
	rm -r __MACOSX
fi
rm $2