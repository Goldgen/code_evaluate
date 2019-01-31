#include <stdio.h>

int main()
{
   double e1=1.0,e=1.0;
   for (int i=1;1/e1>1E-6;i++)
   {
       e1 *= i;
       e+=1/e1;

   }
   printf("%.6lf",e);

}
