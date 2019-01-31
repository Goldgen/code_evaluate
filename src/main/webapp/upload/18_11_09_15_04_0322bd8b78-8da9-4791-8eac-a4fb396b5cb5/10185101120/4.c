#include<stdio.h>
int main()
{
	long long n,i=1,sum=1;
	scanf ("%lld",&n);
	for (;i<=n;i++)
	{
		sum*=i;
		while (sum>20181111)
		{
			sum-=20181111;
		}
	}
	printf ("%lld",sum);
}