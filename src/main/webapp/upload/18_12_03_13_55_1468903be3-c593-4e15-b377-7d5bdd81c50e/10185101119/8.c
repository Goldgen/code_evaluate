#include <stdio.h>
#include <string.h>
int main(){
	char s[81]={0};
	gets(s);
	int len=strlen(s);
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i]){
			printf("False");
			return 0;
		}
	}
	printf("True");
	return 0;
} 