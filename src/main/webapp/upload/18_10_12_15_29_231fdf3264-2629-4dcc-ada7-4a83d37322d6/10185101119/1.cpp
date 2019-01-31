#include <stdio.h>
#include <math.h>
int main()
{
	unsigned long long a;
	unsigned long long b;
	a=pow(2,64)-1;
	b=pow(2,128)-1;
	printf("%u\n%u",a,b);
	return 0;
}