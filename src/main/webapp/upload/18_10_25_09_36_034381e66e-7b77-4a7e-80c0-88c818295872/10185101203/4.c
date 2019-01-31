#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("*");
    printf("\n");
    for(int e=1;e<=n-2;e++)
    {
        printf("*");
        for(int m=1;m<=n-2;m++)
        {printf(" ");}
        printf("*\n");
    }
       for(int k=1;k<=n;k++)
        printf("*");
    return 0;
}