#include <stdio.h>
#include <string.h>

int main()
{
	char str[81];
	gets(str);
	int j=0;
	int l=strlen(str);
	for(int i=0;i<l;i++){
		if(str[i]==str[l-1-i]){
			j++;
		}
	}
	if(j==l){
		printf("True");
	}
	else{
		printf("False");
	}
 } 