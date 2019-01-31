#include <stdio.h>
#include <math.h>

int main()
{
 int d,p,m=0;
 float r=0;

 printf("");
 scanf("%d%d%f",&d,&p,&r);
 r=r*0.01;
 m=log(p/(p-d*r))/log(1+r)+0.5;
 printf(%d",m);
 return 0;
}