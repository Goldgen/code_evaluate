#include<stdio.h>

int main()
{
	long long a,b,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		a*=n;
	}
	b=a%20181111;
	printf("%lld",b);
	return 0;
}