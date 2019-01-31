#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,j,d;
    scanf("%d",&d);
    n=(d+1)/2;
    for(i=1;i<=n-1;i++)
    {
        for(j=n-i;j>=1;j--)
        printf(" ");
        printf("*");
        for(j=1;j<=2*i-3;j++)
       printf(" ");
       if(i==1)
        printf("\n");
        else
        printf("*\n");
    }
    for(i=1;i<=2*n-1;i++)
        printf("*");
    return 0;
}
