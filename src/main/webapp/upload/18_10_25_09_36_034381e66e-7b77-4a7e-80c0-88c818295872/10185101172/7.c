#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j=0;
   scanf("%d",&n);
        for(j=0;j<(n-1)/2;j++)
            printf(" ");
        printf("*");
            printf("\n");
   for(i=2;i<(n+1)/2;i++)
    {
     for(j=0;j<(n+1)/2-i;j++)
        printf(" ");
     printf("*");
     for(j=1;j<=2*i-3;j++)
        printf(" ");
     printf("*");
    printf("\n");
    }
    for(i=1;i<=n;i++)
        printf("*");
   return 0;
}
