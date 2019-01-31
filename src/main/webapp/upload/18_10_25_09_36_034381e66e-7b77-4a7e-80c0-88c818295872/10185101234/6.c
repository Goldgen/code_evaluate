#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    j=n;
    printf("*\n");
    for(int q=1; q<=(n-2); ++q)
    {
        printf("*");
        for(int w=1; w<=(q-1); ++w)
            printf(" ");
        printf("*");
        printf("\n");
    }
    for(i=1; i<=j; ++i)
        printf("*");
    return 0;
}