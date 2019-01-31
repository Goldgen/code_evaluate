#include <stdio.h>
#include<string.h>
char* strmcpy(char* t, char* s, int m){
    s+=m;
	while(*s)
	{
		*t++=*s++;
	}
    *t='\0';
}
int main()
{
    char s[85],t[85];
    int m;
    gets(s);
    scanf("%d",&m);
    strmcpy(t,s,m);
    printf("%s",t);
}