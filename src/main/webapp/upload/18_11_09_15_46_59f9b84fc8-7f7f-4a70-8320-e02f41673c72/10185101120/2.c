#include<stdio.h>
int main()
{
	double sum=0,a=2,b=1,c;
	for (int i=0;i<50;i++)
	{
		sum=sum+a/b;
		c=a;
		a=a+b;
		b=c;
	}
	printf ("%.2lf",sum);
}