#include <stdio.h>
#include <string.h>
int main(){
	char str[10000]={0};
	gets(str);
	int len=strlen(str);
    for (int i=len-2;i>=0;i--){
		printf("%c",str[i]);
	}	   
	return 0;	 
} 