#include<stdio.h>
int main()
{
	long long int sum=1,n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	sum=sum*i;
	printf("%lld",sum);
	return 0;

}