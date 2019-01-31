#include<stdio.h>
int main()
{
	int a=10,b=20,c=1;
	long long d=1;
	for (;a>=1;a--)
	{
		c*=a;
	}
	for (;b>=1;b--)
	{
		d*=b;
	}
	printf("%d\n%lld",c,d);
	return 0;
}