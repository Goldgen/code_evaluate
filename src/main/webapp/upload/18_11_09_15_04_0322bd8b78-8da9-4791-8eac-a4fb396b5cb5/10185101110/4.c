#include<stdio.h>
int main()
{
	int i;
	long long a,jc=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		jc=jc*i;
		jc=jc%20181111;
		
	}
	
	printf("%lld",jc);
	return 0;
 } 