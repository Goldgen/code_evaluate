#include <stdio.h>
#include <math.h>
int main()
{
   int d=0;
   int p=0;
   int r=0;
   int M=0;
   double m=0;
   scanf("%d %d %d",&d,&p,&r);
   m=log(p/(p-d*r*0.01))/log(1+r*0.01);
   M=m+0.5;
   printf("%d",M);
   return 0;
}