#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*(n-i);j++)
            printf(" ");
        printf("1");
        for(j=2;j<=i;j++)
            printf("+%d",j);
        printf("=");
        printf("%d",i);
        for(j=i-1;j>=1;j--)
            printf("+%d",j);
        if(i!=n)
            printf("\n");
    }
}