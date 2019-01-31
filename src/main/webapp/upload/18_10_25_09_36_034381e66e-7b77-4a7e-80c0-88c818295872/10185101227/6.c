#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,i,h;
    scanf("%d",&n);
    printf("*\n");
    h=2;
    while (h<n)
    {i=2;
     printf("*");
        while(i<h)
        {printf(" ");
         ++i;}
    printf("*\n");
    ++h;}
    i=1;
    while (i<=n)
    {printf("*");
     ++i;}
    return 0;
}
