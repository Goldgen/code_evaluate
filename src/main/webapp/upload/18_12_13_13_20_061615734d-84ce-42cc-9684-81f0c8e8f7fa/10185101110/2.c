#include<stdio.h>
#include<string.h>
char* strmcpy(char* t, char* s, int x); 
int main()
{
	char s[81],t[81];
	gets(s);
	int x;
	scanf("%d",&x);
	strmcpy(&t[0],&s[0],x);
	printf("%s",t);
	return 0;
}
	

char* strmcpy(char* t, char* s, int x)
{
	 s=s+x;
	 while(*s!='\0')
	 {
	 	*t=*s;
	 	t++;
	 	s++;
	 }
}