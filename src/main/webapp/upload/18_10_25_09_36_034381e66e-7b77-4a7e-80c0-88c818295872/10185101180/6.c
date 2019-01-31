#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d",&n);
    printf("*\n**\n");
    for(i=0;i<(n-3);i++)
    {
        printf("* ");
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(m=0;m<n;m++)
    {
        printf("*");
    }
    return 0;
}
