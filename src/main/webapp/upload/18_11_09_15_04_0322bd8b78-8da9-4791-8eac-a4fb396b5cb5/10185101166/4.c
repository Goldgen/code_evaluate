#include<stdio.h>
#include<math.h>
int main()
{
	long long int a;
	long long int n,i;
	scanf("%lld",&n);
	if(a != 0)
	{
			for(a = 1,i = 1;i <= n;i ++)
	{
		a = a * i;
	}
	i = a % 20181111;
	printf("%lld",i);
	}
	if(a==0)
	printf("1");
} 