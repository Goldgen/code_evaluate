#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    printf("*\n");
    for(i=1;i<=n-2;i++)
        for(j=1;j<=i+1;j++)
    {   if(j==1) printf("*");
        if(j>1&&j<i+1) printf(" ");
        if(j==i+1) printf("*\n");
    }
    for(i=1;i<=n;i++)
        printf("*");
    return 0;
}