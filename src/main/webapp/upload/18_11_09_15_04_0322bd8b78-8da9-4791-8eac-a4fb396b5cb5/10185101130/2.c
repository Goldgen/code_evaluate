#include<stdio.h>

int main(void)
{
    int n,i,m,j,k;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        for(m = 1;m <= 2*(n-i);m++)
            printf(" ");
        printf("1");
        for(j = 2;j <= i;j++)
        {
            printf("+%d",j);
        }
        printf("=");

        printf("%d",i);
        if(i == 1)
            printf("\n");
        for(k = i-1;k >= 1;k--)
        {
            printf("+%d",k);
            if(k == 1&&i != n)
                printf("\n");
        }
    }
    return 0;
}
