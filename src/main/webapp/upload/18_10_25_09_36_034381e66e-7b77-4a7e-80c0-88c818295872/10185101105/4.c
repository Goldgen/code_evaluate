#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k,a,b;
    scanf("%d",&n);
    if((n>=4)&&(n<=100))
    for(i=1;i<=n;i++)
        printf("*");
    printf("\n");
    for(k=1;k<=n-2;k++)
    {
        printf("*");
        for(a=1;a<=n-2;a++)
            printf(" ");
        printf("*\n");
    }
    for(b=1;b<=n;b++)
        printf("*");
    return 0;
}
