#include <stdio.h>
#include <string.h>

int main()
{
	char str1[81];
	gets(str1);
	int l1=strlen(str1);
	char str2[81];
	gets(str2);
	int l2=strlen(str2);
	int a,m=0,p;
	char temp[81];
	for(int i=0;i<l1;i++){
		for(int k=0;k<l2;k++){
			temp[k]=str1[i+k];
		}
		a=strcmp(temp,str2);
		if(a==0){
			m++;
			if(m==1){
				p=i;
			}
		}	
	}
	if(m==1){
		printf("%s: %d time(s), first at %d",str2,m,p);
	}
	else if(m==0){
		printf("%s: 0 time(s), first at -1",str2);
	}
	else if(m>0&&m!=1){
		printf("%s: %d time(s), first at %d",str2,m,p);
	}
	
 } 