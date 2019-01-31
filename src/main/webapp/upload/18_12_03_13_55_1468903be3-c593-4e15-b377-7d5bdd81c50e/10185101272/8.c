#include<stdio.h>
#include<string.h>

int main(){
	char s[100]={};
	int i,l;
	fgets(s,100,stdin);
	l=strlen(s);
	for(i=0;i*2<l;i++)
		if(s[i]!=s[l-i-2]){
			printf("False",s[i],s[l-i-2]);
			return 0;
		}
	printf("True");
	return 0;
} 