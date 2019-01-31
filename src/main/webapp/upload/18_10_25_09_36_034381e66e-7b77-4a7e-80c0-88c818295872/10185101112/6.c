#include <stdio.h>

int main()
{
    int n=1;
    scanf("%d",&n);
    printf("*");
    for (int i=1;i<=n-2;++i)
    {
        printf("\n*");
        for (int k=1;k<=i-1;++k)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (int i=1;i<=n;++i)
    {
        printf("*");
    }
}