#include<stdio.h>
#include<string.h>
int main()
{
    char s[85],a[85];
    fgets(s,85,stdin);
    scanf("%s",a);
    int t,x,g=0,f=-1;
    t=strlen(s)-1;
    x=strlen(a);
    for (int i=0; i<t-x+1; i++)
    {
        int j=0;
        for (int v=i; j<x; j++,v++)
            if (a[j]!=s[v]) break;
        if (j==x)
        {
            g++;
            if (f==-1) f=i;
        }
    }
    printf("%s: %d time(s), first at %d",a,g,f);
    return 0;
}
