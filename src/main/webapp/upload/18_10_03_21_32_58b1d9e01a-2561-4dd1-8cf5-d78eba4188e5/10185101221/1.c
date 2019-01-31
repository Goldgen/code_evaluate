#include <stdio.h>
#include <math.h>
int main()
{
   int d , p  ,R ,m;
   float r ,M;
   scanf("%d %d %d",&d, &p, &R);
   r =(float)R/100;
   M = log(p / (p - d * r)) / log(1 + r);
   m = ceil(M) ;
   printf("%d", m);
   return 0;
}