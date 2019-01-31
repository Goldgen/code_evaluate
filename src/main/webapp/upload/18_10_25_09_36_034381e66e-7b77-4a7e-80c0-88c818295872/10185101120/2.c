#include<stdio.h>
int main()
{
	int n=5;
	double a,ave,sum;
	while (n--)
	{
		scanf ("%lf",&a);
		sum+=a;
	}
	ave=sum/5;
	printf ("%.1lf",ave);
}