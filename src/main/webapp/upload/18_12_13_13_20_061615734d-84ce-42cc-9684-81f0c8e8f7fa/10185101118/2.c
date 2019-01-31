#include<stdio.h>
#include<string.h>
char *strmcpy(char *t, char *s, int m)
{
    return s+m;
}
int main()
{
    int n;
    char s[90],*t;
    fgets(s,89,stdin);
    scanf("%d",&n);
    t=strmcpy(t,s,n);
    printf("%s",t);
    return 0;
}
