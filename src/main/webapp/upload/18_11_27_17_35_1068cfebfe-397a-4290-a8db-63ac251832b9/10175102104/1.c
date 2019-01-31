#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n;
   double s[5],t[5],all=0;
   for(n=0;n<5;n++)
   {
       scanf("%lf",&s[n]);
   }
   for(n=0;n<5;n++)
   {
       t[n]=1.0/s[n];
       all=all+t[n];
   }
   for(n=0;n<5;n++)
   {
       printf("%.2lf",t[n]);
       if(n!=4)
       {
           printf(" ");
       }
       else
       {
           printf("\n");
       }
   }
   printf("%.6lf",all);
   return 0;
}