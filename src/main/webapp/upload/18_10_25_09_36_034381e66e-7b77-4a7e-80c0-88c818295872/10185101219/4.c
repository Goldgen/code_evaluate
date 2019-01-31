#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;++i)
        printf("*");
   for(int i=0;i<(n-2);++i)
    {
        printf("\n*");

        for(int s=0;s<(n-2);++s)
        printf(" ");

        printf("*");

    }
    printf("\n");
   for (int i=0;i<n;++i)
    printf("*");
   return 0;
}
