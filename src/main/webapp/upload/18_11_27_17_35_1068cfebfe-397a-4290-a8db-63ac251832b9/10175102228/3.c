#include<stdio.h>
#include<stdlib.h>
int main()
{  double a[5];
 int i;
 for(i=0;i<5;i++)
 { scanf("%lf",&a[i]);
  printf("$%.2lf",a[i]);
  if(i<4)printf(" ");
 }
 
  return 0;
}