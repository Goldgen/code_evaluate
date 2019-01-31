#include<stdio.h>
#include<math.h>

int main()
{   double d,p,r;
	scanf("%lf %lf %lf",&d,&p,&r);
	double m;
    m=log(p/(p-d*r/100))/log(1+r/100);
	printf("%.0f",m);
	return 0;



}
