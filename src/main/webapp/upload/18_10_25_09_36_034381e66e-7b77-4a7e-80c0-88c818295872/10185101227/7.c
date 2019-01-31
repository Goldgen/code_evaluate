#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,i,h;
    scanf("%d",&n);
    h=1;
    while (h<((n+1)/2))
    {  i=1;
        if (h>1)
        {while (i<((n+1)/2-h+1))
        {printf(" ");
        ++i;}
        printf("*");
        i=i+1;}
        while (i<((n+1)/2+h-1))
        {printf(" ");
        ++i;}
        printf("*\n");
        ++h;
    }
    i=1;
    while (i<=n)
    {printf("*");
    ++i;}
    return 0;
}

