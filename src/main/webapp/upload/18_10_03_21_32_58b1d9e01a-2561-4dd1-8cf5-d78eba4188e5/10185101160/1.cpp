#include <stdio.h>
#include <math.h>
int main ()
{
	int d=0;
	int p=0;
	int r=0;
	float a=0;
	double m=0;
    scanf ("%d%d%d",&d,&p,&r);
    a= 0.01*r;
    m = log(p/(p-d*a))/log(1+a);
	printf("%.0lf",m+0.5);
	return 0;
}
