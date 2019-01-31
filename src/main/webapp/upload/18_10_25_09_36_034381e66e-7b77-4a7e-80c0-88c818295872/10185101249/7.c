#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,i,j;
    scanf("%d",&n);
    for(a=1;a<=n/2;a++)
       printf(" ");
    printf("*\n");
    for(b=2;b<=n/2;b++)
    {
        for(i=n/2-b;i>=0;i--)
         printf(" ");
        printf("*");
        for(j=1;j<=2*b-3;j++)
         printf(" ");
        printf("*\n");
    }
    for(c=1;c<=n;c++)
        printf("*");
    return 0;
}
