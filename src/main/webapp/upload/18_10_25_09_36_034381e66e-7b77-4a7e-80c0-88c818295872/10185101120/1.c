#include<stdio.h>
int main()
{
	int n=10;
	double a=0,c=100;
	while (n--)
	{
		a+=c;
		c/=2;
		a+=c;
	}
	a-=c;
	printf ("%.3lf %.3lf",a,c);
}