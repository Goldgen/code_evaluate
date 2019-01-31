#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strmcpy(char* t, char* s, int m)
{
    int i=0;
    for(i=0;i<strlen(s);++i)
        t[i]=s[i];
    t[i]='\0';
    return t;
}

int main()
{
    char s[81],t[81];
    int m=0;
    gets(s);
    scanf("%d",&m);
    puts(strmcpy(t,s+m,m));
    return 0;
}
