#include<stdio.h> 
#include<string.h>
char* strmcpy(char *t,char *s,int m){
	int i,l=strlen(s);
	for(i=0;i+m<l;i++)
		t[i]=s[i+m];
	return t;
}
int main(){
	char s[100]={},t[100]={};
	int m;
	fgets(s,100,stdin);
	scanf("%d",&m);
	strmcpy(t,s,m);
	printf("%s",t);
	return 0;
}