#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int n=1;
   int j;
   scanf("%d",&j);
   for (;j>=2;--j)
   {
       n=(n*j);
   }
   printf("%ld",n);
   return 0;
}
