#include<stdio.h>
int main()
{
	unsigned long long x,p,n;
	scanf ("%llu %llu %llu",&x,&p,&n);
	x=x<<(64-p-1);
	x=x>>(64-n);
	printf ("%llu",x);
}