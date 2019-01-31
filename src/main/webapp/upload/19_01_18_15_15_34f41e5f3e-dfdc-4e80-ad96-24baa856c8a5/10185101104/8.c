#include <stdio.h>

int main()
{
	long long int a,b,test,front,end;
	int i,j,n=0;
	scanf("%lld %lld",&a,&b);
	test=a;
	while(test>0)
	{
		test/=10;
		n++;
	}
	for(i=0;i<b%n;i++)
	{
		front=a/10;
		end=a%10;
		for(j=1;j<n;j++)
			end*=10;
		a=front+end;
	}
	printf("%d %lld",n,a);
	return 0;
}