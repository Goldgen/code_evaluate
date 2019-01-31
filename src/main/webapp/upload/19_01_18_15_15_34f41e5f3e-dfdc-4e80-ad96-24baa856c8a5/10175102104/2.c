#include <stdio.h>
#include <stdlib.h>

int M(int a)
{
   int b=1;int x;
   if (a==0)
      b=1;
   else
      for(x=1;x<=a;x++)
      b*=x;
   return b;
}
int main()
{
    double e=0;int y;
    for (y=0;(1.0/M(y))>=1.0e-6;y++)
    e+=(1.0/M(y));
    printf("%.6f",e);
    return 0;
}
