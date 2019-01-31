#include<stdio.h> 

int main()
{
	int n;
	long long a=1;
	scanf("%d",&n);
	while((0<n)&&(n<20))
	{
		a=a*n;
		n--;
	}
	printf("%lld",a);
	return 0;
}