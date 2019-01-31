#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0;

   scanf("%d",&n);
   unsigned int i,j=1;
   for(i=1;i<=n;++i)
    printf("*");
   for(i=1;i<=n-2;++i)
    {
    printf("\n*");
    for(j=1;j<=n-2;++j)
        printf(" ");

    printf("*");
    }

    printf("\n");
    for(i=1;i<=n;++i)
        printf("*");

   return 0;
}
