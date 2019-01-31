#include <stdio.h>
#include <string.h>
char* strmcpy(char* t, char* s, int m)
{
    s=s+m;
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
}
int main ()
{
    char s1[81];
    char s2[81];
    gets(s1);
    int m;
    scanf("%d",&m);
    strmcpy(s2,s1,m);
    printf("%s",s2);
    return 0;
}