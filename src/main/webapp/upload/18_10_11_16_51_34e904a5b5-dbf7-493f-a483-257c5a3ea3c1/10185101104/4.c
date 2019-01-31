#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;
	scanf("%lf%lf",&a,&b);
	c=a-b;
	if(c<0)
	{
		c=-c;
	}
	printf("%.8lf %.8lf %.3lf",a,b,sqrt(c));
	return 0;
}