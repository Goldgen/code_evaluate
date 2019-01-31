#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int i;
   scanf("%d",&n);
   if(n>=1&&n<10)
   {
   for(i=1;i<=2*(n-1);i++)
        printf("*");
      printf("%d+%d=%d+%d",i,i+1);
   }
   return 0;
}

