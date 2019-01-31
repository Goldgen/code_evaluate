#include<stdio.h>
int main()
{
  double i,e=0,s=1;
  for(i=1;i<=49;i++)
  {
    s=s*i;
    e=e+1/s;
  }
   printf("%lf",e+1);
   return 0;
}
