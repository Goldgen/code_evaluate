#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    printf("*\n");
    for(i=1;i<n-1;i++)
    {
        printf("*");
        for(j=1;j<i;j++)
            printf(" ");
        printf("*\n");
    }
    for(i=0;i<n;i++)
        printf("*");
    return 0;
}
