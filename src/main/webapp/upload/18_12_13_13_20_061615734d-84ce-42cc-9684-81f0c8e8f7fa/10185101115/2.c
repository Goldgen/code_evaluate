#include <stdio.h>
#include <string.h>

char* strmcpy(char*,char*,int);

int main()
{
	char s[81],t[81];
	gets(s);
	int m;
	scanf("%d",&m);
	strmcpy(t,s,m);
	printf("%s",t);
 } 
 
 char* strmcpy(char* t,char* s,int m)
 {
 	int l=strlen(s);
 	s[l]='\0';
 	for(int i=m,k=0;i<l,k<l-m;i++,k++){
 		t[k]=s[i];
	 }
	 t[l-m]='\0';
 }