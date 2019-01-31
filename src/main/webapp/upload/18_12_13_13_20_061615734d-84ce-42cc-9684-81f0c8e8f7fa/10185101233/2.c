#include <stdio.h>
#include<string.h>
char* strmcpy(char* t, char* s, int m)
{
    s+=m;
	while(*s)
	{
		*t++=*s++;
	}
    *t='\0';
}
int main()
{
    char s[88],t[88];
    int n;
    gets(s);
    scanf("%d",&n);
    strmcpy(t,s,n);
printf("%s",t);
return 0;
}
