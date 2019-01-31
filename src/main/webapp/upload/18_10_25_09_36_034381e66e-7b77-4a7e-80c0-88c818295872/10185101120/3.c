#include<stdio.h>
int main()
{
	long long a,sum=1;
	scanf ("%lld",&a);
	for (;a;a--)
	{
		sum*=a;
	}
	printf ("%lld",sum);
}