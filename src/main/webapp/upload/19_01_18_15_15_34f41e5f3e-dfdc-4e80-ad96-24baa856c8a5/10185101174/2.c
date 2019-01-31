#include <stdio.h>
#include <stdlib.h>

int main()
{
  double a=1.0;

  double c=1.0;
  double sum=1.0;
  for( ;a<10000;a++)
  {
      double b=1.0;
      c=a;
      for(;c>0;c--)
      {
          b*=1/c;
      }
       sum+=b;
  }
  printf("%.6f",sum);



}
