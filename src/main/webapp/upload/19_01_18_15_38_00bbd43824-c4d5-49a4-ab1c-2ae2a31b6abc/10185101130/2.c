#include<stdio.h>

int main(void)
{
	unsigned long long int  x,p,n;
	scanf("%llu %llu %llu",&x,&p,&n);
	unsigned long long int  result;
	result = x << 64-(p+1);
	result = result >> (p-n+1+64-(p+1));
	printf("%llu",result);
	return 0;
	
}