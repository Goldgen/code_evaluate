#include<stdio.h>
#include<math.h>
int main(void)
  {
   double a,b,c;
   scanf("%lf %lf",&a,&b);
   c=a-b;
	if(c<0)c*=-1;
	c=sqrt(c);
    printf("%.8lf %.8lf %.3lf",a,b,c);
  return 0;}
