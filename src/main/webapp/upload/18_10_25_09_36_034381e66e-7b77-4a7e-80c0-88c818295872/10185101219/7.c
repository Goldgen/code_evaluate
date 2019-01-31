#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;

    scanf("%d",&n);
    {
    for(int h=1;h<=((n-1)/2);++h)
    printf(" ");
    }

    printf("*\n");

    for (int i=1;i<=((n+1)/2-2);++i)
    {
        {
        for(int b=((n-1)/2)-i-1;b>=0;--b)
        printf(" ");
        }
        printf("*");
    for (int j=1;j<=(2*(i-1)+1);++j)
    printf(" ");
    printf("*\n");
    }
    for (int k=1;k<=n;++k)
    printf("*");




    return 0;
}
