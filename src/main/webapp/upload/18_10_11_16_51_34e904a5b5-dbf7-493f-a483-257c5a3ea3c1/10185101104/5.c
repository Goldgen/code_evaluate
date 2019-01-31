#include <stdio.h>

int main()
{
	int i;
	long long int n10=1,n20=1;
	for(i=1;i<11;i++)
	{
		n10*=i; 
	}
	for(i=1;i<21;i++)
	{
		n20*=i;
	}
	printf("%lld\n%lld",n10,n20);
	return 0;
}