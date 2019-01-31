#include<stdio.h>
int main()
{
	double a=1,b=2,c=0,sum=0;
	int i;
	for (i=0;i<50;i++)
	{
		sum += b/a;
		c=b;
		b=a+b;
		a=c;
	}
	printf("%.2lf",sum);
	return 0;
}