#include <stdio.h>

int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(k=1;k<=n;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for(k=2;k<=n-1;k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}