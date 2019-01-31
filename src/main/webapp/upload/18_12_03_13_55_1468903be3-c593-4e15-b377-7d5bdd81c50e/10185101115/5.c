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
	if(l1!=l2){
		printf("\"%s\" is NOT a rotation of ",str1);
		printf("\"%s\"",str2);
	}
	else{
		char temp[81];
	for(int i=0;i<l1;i++){
		for(int k=0;k<l1;k++){
			temp[k]=str1[i+k];
		}
		a=strcmp(temp,str2);
		if(a==0){
			m++;
			}
		}
		if(m==1){
			printf("\"%s\" is a rotation of \"%s\"",str1,str2);
		}	
 }
 return 0;
}
