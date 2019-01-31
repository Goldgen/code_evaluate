#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,n,m;
    char a[80],b[80];
    scanf("%s %s",a,b);
    if(strlen(a)>=strlen(b))
    {
        n=strlen(b);
        m=strlen(a);
    }
    else
    {
        n=strlen(a);
        m=strlen(b);
    }
    for(i=0;i<n;i++)
    {
        printf("%c%c",a[i],b[i]);
    }
    if(strlen(a)>=strlen(b))
    {
        for(i=n;i<m;i++)
        {
            printf("%c",a[i]);
        }
    }
    else
    {
        for(i=n;i<m;i++)
        {
            printf("%c",b[i]);
        }
    }
    printf("\n");
    return 0;
}
