#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,a,b;
    scanf("%d",&n);
    if((n>=4)&&(n<=100))
    printf("*\n");
    for(k=1;k<=n-2;k++)
    {
        printf("*");
        for(a=1;a<=k-1;a++)
            printf(" ");
        printf("*\n");
    }
    for(b=1;b<=n;b++)
        printf("*");
    return 0;
}
