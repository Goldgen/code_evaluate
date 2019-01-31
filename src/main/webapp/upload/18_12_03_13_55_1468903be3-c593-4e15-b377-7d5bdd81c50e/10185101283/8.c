#include<stdio.h>
int f(char *s,int n,int m)
{
    for(int i=0;i<=m;++i)
    {
        if(s[i]!=s[n-1-i])
            return 0;
    }
    return 1;
}
int main()
{
    char s[80];
    gets(s);
    if(f(s,strlen(s),strlen(s)/2))
        printf("True");
    else
        printf("False");
    return 0;
}