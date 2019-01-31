#include<stdio.h>
int main()
{
	double e=1,a=1,b=1,c;
	double js(double x);
	for (;a>10E-6;b++)
	{
		c=js(b);
		a=1/c;
		e+=a;
	}
	printf ("%.6lf",e);
}
double js (double x)
{
	double a=1;
	for (;x;x--)
	{
		a*=x;
	}
	return a;
}