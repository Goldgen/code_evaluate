#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strmcpy(char* t,char* s,int m);
int main()
{
    char a[100];
    char b[100];
    gets(b);
    int n;
    scanf("%d",&n);
    char* c = strmcpy(a,b,n);
    printf("%s\n",c);
    return 0;
}

char* strmcpy(char* t,char* s,int m)
{
    int len = strlen(s);
    int i;
    for(i = 0;i + m <= len+2;i++)
    {
       if(i + m == len+2)
        t[i] = '\0';
       else
        t[i] = s[i+m];
    }
    return t;
}
