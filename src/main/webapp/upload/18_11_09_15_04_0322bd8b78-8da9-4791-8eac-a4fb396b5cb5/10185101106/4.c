#include<stdio.h>
int main()
{
	long long int i,j=1,n;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	j=i*j;
	printf("%lld",j%20181111);
	return 0;
 } 