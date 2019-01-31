#include<stdio.h>
#include<limits.h>
int main()
{
    int n,j,k,m;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
        printf("*");
        printf("\n");
        for(k=1;k<=n-2;k++)
        {
            printf("*");
            for(m=1;m<=n-2;m++)
                printf(" ");
            printf("*\n");
        }
        for(j=1;j<=n;j++)
            printf("*");

    return 0;
}