#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int n;
   double list[5];
   for(n=0;n<5;n++)
   {
       scanf("%lf",&list[n]);
   }
   for(n=0;n<5;n++)
   {
       printf("$%.2lf ",list[n]);
       if(n!=4)
       {
           printf(" ");
       }
   }
   return 0;
}
