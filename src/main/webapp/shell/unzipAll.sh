#!/usr/bin/env bash
cd $1
unzip -o $2 | mv `unzip -l $2 | awk '{if(NR == 4){ print $4}}'` $3
cd $3
zipList=$(ls -l | grep "\.zip$" | awk '{print $9}')
for zipName in $zipList
do
	unzip -o $zipName
	rm $zipName
done
if [ -d "__MACOSX" ]
then
	rm -r __MACOSX
fi
cd ..
if [ -d "__MACOSX" ]
then
	rm -r __MACOSX
fi
rm $2
