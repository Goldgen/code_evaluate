#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main()
{
    char s[85];
    int a,b,t=0;
    gets(s);
    if(strlen(s)%2==0)
    {
        for(a=0,b=strlen(s)-1;a<=strlen(s)/2-1,b>=strlen(s)/2;a++,b--)
        {
            if(s[a]!=s[b])
              t++;
        }
    }
    else
    {
        for(a=0,b=strlen(s)-1;a<=(strlen(s)-1)/2-1,b>=(strlen(s)-1)/2+1;a++,b--)
        {
            if(s[a]!=s[b])
              t++;
        }
    }

    if(t==0)
        printf("True");
    else
        printf("False");
}