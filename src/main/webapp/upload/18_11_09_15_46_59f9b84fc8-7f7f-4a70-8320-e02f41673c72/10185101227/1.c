#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int i,n,a=0;
  for (i=6;i<=100;i+=10)
    {n=i%3;
    if (n==0) ++a;
    if (n==0&&a==1) printf("%d",i);
    else if (n==0) printf(" %d",i);}
  return 0;
}

