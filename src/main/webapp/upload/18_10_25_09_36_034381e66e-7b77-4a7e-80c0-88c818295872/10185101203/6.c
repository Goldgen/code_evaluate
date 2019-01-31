#include <stdio.h>
int main()
{
    int n,i=3,k=1;
    scanf("%d",&n);
    printf("*\n**");
    for(;i<=n-1;i++)
    {
        printf("\n*");
        for (k=1;k<=i-2;k++)
            printf(" ");
        printf("*");
    }
    printf("\n");
    for (i=1;i<=n;i++)
        printf("*");
}