#include <stdio.h>
#include <math.h>
int main()
{
    double d,p,m;
    double r;
    scanf ("%lf %lf %lf",&d,&p,&r);
	m=log(p/(p-d*(r/100)))/log(1+r/100);
	printf("%.0lf",m);
    return 0;
}