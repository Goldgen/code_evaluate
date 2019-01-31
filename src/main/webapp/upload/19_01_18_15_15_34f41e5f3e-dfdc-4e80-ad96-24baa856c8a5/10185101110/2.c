#include<stdio.h>
int main()
{
	double  e=1,a=1,b=1;
	for(a=1;1.0/b>1.0e-6;a++)
	{
		b=b*a;

	e=e+1.0/b;

	}
	printf("%lf",e);
	return 0;
 } 