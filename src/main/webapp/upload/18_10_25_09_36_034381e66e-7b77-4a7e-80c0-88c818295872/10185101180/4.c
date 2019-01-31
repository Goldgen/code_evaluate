#include<stdio.h>
int main()
{
    int j,k,m,n,a;
    scanf("%d",&n);
    for(j=0;j<(n-1);j++)
    {
        printf("*");
    }
    printf("*\n");

        for(k=0;k<(n-2);k++)
        {
            printf("*");
            for(m=0;m<(n-2);m++)
            {
                printf(" ");
            }
            printf("*\n");
        }

    for(a=0;a<n;a++)
    {
        printf("*");
    }
    return 0;
}