#include <stdio.h>
int main()
{
    int n,i=1,t,k,m,s=1,j=1;
    scanf("%d",&n);
    t=(n+1)/2-2;
    k=(n-1)/2;
    for(;i<=k;i++)
        printf(" ");
    printf("*");
    for(i=1;i<=t;i++)
    {
        printf("\n");
        for(m=1;m<=k-1;m++)
            printf(" ");
        printf("*");
        for(j=1;j<=s;j++)
            printf(" ");
        printf("*");
        s=s+2;
        k--;
    }
    printf("\n");
    for(i=1;i<=n;i++)
        printf("*");
}