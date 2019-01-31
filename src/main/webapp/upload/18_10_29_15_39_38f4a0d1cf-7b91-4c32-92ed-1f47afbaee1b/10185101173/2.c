#include<stdio.h>

int main()
{
  double n=1,a=1,e=1;
  do
   {
    a=a/n;
    e+=a;
    n=n+1;
   }while(a>=1e-6);
  printf("%lf",e);
}
