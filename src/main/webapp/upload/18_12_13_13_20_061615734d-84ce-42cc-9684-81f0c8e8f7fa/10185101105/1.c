#include <stdio.h>
int main()
{
	char* strmcpy(char* t, char* s, int m);
    char str1[80]={},str2[80]={};
    char * t=str1;
    char * s=str2;
    int m;
    gets(str1);
    scanf("%d",&m);
    strmcpy(t,s,m);
    puts(str2);
    return 0;
}
char* strmcpy(char* t, char* s, int m)
{
    t+=m;
    while(*(t)!='\0')
    {
        *(s)=*(t);
        s++;
        t++;
    }
}
