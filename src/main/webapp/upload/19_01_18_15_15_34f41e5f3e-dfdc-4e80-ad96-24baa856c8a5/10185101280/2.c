#include<stdio.h>
void main()
{
 int i=0;
 double j=1,e=1;
 while(1/j>=1e-6)
  {
  i=i+1;
  j=j*i;
  e=e+1/j;
  }
 printf("%.6lf",e);
}