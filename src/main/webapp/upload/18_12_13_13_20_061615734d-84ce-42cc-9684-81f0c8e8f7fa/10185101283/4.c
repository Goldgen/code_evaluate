#include<stdio.h>
char *f(char *s)
{
    char *t=s;
    while(*t!='\0')
    {
        if(*t=='Z')
            *t='A';
        else
           *t=*t+1;
        ++t;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;++i)
    {
        char s[50];
        gets(s);
        printf("case #%d: %s\n",i,f(s));
    }
    return 0;
}
