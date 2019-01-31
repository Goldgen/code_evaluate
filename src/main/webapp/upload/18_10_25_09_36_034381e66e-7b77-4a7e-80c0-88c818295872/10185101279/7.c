#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<(n-1)/2;i++)
        printf(" ");
    printf("*\n");
    for(int i=1;i<=(n-3)/2;i++)
    {
        for(int k=0;k<(n-1)/2-i;k++)
            printf(" ");
        printf("*");
        for(int k=0;k<2*i-1;k++)
            printf(" ");
        printf("*\n");

    }
    for(int i=0;i<n;i++)
        printf("*");




   return 0;
}








