#include <stdio.h>
int main()
{
	long long i,n,rem=1;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
		rem=(rem*i)%20181111;
	printf("%lld",rem);
	return 0;
}
