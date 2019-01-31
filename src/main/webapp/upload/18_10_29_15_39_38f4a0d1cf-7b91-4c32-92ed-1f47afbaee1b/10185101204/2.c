#include <stdio.h>
int main()
{
 double e=1,p=1,i;
 for(i=1;i<10;i++)
 {
  p*=i;
  e+=1/p;
 } printf("%.6lf",e);}
