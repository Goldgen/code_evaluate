#include<stdio.h>
int main()
{
	double h,n=10,x=0,b;
	int i=1;
	b=h=100;
	for(;i<=n;i++)
	{
		h=h/2;
		x+=h;
	}
	x=2*x+b-2*h;
	printf("%.3lf %.3lf",x,h);
	return 0;
}
