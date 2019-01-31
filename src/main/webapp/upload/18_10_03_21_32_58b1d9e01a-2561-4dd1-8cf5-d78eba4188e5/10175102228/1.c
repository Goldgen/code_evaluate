#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{ int d,p,r;
   scanf("%d%d%d",&d,&p,&r);
   double m=(double)log(p/(p-d*r*0.01))/log(1+r*0.01);
   printf("%.lf",m);
  return 0;
}