#!/usr/bin/env bash
cd src/main/webapp/upload
unzip -o $1.zip | mv `unzip -l $1.zip | awk '{if(NR == 4){ print $4}}'` $1
cd $1
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
rm $1.zip
