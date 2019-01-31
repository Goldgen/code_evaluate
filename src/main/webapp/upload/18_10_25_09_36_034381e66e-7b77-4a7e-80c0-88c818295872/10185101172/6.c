#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j=0;
   scanf("%d",&n);
   printf("*\n**");
   for(i=3;i<n;i++)
   {
       printf("\n*");
       for(j=1;j<i-1;++j)
        printf(" ");

       printf("*");
   }
   printf("\n");
   for(i=0;i<n;++i)
    printf("*");
   return 0;
}
