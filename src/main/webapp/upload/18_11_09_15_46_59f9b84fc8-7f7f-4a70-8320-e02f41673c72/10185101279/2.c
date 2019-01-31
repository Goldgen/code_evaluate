

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  double a=2;
  double b=3;
  double c;
  double sum=a/(a-1)+b/(b-1);
  for(int i=1;i<=48;i++)
  {
      c=a+b;
      sum+=c/b;
      a=b;
      b=c;
  }
  printf("%.2lf",sum);

  return 0;
}

































































