#include <stdio.h>
int main()
{
   int N=1;
   double e;
   for(int i=1;(1.00/N)>1e-6;i++)
   {
    N*=i;
    e+=1.00/N;
   }
   printf("%.6lf",e+1);
   return 0;
}