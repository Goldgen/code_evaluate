#include <stdio.h>


int main()
{
    int i=1;
    float h = 100,a = 0,sum=100;
   for(;i<=10;++i)
    {
        sum=sum+2*a;
       h = h/2;
       a=h;
      }
    printf("%.3f %.3f",sum,h);
}