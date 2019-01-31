#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned int a=LONG_MAX;
	unsigned long long b=LONG_LONG_MAX;
	a=a*2+1;
	b=b*2+1;
	printf ("%u\n%llu",a,b);
	return 0; 
}