#include <stdio.h>
#include <math.h>
int main()
{
	double n=1,sum=1,pro=1;
	for (n=1;n<20&&pro<1e6;n++)
	{	pro*=n;
		sum+=1/pro;
	}
	printf("%lf",sum);
	return 0;
}