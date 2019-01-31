#include <stdio.h>
#include <math.h>
int main()
{
	double A;
	double B;
	scanf("%lf%lf",&A,&B);
	printf("%.8lf %.8lf %.3lf",A,B,sqrt(abs(A-B)));	
}