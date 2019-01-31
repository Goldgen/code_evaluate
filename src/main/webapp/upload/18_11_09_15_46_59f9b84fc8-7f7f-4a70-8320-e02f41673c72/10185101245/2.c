#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  float a=1;
  float b=2;
  float sum,t;
  for(i=1;i<=50;i++)
  {
      sum+=b/a;
      t=a+b;
      a=b;
      b=t;
  }
  printf("%.2f",sum);
    return 0;
}
