#include<stdio.h>
#include<math.h>

int main()
{
    double d , p , r;
	scanf("%lf %lf %lf", &d , &p , &r);
	r /= 100.0;
	printf("%.0lf", log(p/(p-d*r))/log(1+r));
	return 0;
}	