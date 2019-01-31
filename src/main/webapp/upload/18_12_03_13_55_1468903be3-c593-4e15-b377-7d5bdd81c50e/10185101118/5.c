#include<stdio.h>
#include<string.h>
int main()
{
    char a[81],b[81],g[81];
    scanf("%s %s",a,b);
    int x,i;
    x=strlen(b);
    for (i=0; i<x; i++)
    {
        int n=0;
        for (int v=i; v<x; v++,n++)
            g[n]=b[v];
        for (int v=0; v<i; v++,n++)
            g[n]=b[v];
        g[x]='\0';
        if (strcmp(a,g)==0)
        {
            printf("\"%s\" is a rotation of \"%s\"",a,b);
            break;
        }
    }
    if (i==x) printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
    return 0;
}
