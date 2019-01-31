#include <stdio.h>

int main()
{
    int n=1;
    scanf("%d",&n);

    for (int i=1;i<=(n+1)/2-1;++i)
    {
     printf(" ");
    }
    printf("*\n");

    for (int i=1;i<=(n+1)/2-2;++i)
    {
     for (int k=1;k<=((n+1)/2-i-1);++k)
    {
     printf(" ");
    }

    printf("*");

    for(int k=1;k<=2*i-1;++k)
    {
    printf(" ");
    }
    printf("*\n");
    }

    for (int i=1;i<=n;++i)
    {
        printf("*");
    }
}
