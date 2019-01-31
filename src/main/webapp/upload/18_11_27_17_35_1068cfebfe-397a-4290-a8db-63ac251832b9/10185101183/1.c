#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,d,e;
   scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
   printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n",1/a,1/b,1/c,1/d,1/e);
   printf("%.6lf",1/a+1/b+1/c+1/d+1/e);
}
