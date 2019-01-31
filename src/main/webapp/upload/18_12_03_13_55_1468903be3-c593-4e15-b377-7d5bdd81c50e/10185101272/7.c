#include<stdio.h>
#include<string.h>

int main(){
	char s[100]={},a[100]={};
	int maxn=0;
	while(~scanf("%s",s)){
		if(strlen(s)>maxn){
	//	printf("\n");
		maxn=strlen(s);
		strcpy(a,s);
	}
	}
	
	printf("%s",a);
	return 0;
} 