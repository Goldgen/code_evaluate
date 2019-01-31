#include<stdio.h>
#include<string.h>


char* strmcpy(char* t, char* s, int m);

int main(void)
{
    int m = 0;
    char t[81];
    char s[81];
    gets(s);
    scanf("%d",&m);
    strmcpy(t,s,m);
    puts(t);
}

char* strmcpy(char* t, char* s, int m)
{
    int len = 0;
    while(s[len]!='\0')
    {
        len++;
    }
    int i = 0;
    for(i=0;i<=len;i++)
    {
        t[i]=s[i+m];
    }
}
