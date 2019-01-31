#include <stdio.h>
int main()
{
	unsigned long long int x;
	unsigned int p,n;
	scanf("%u%u%u",&x,&p,&n);
	unsigned int t = p - n + 1;
    long long int take = 0;
    take = x >> t;
    long int i = ~(~0<<n);
    take &= i;
    printf("%lld",take);
	return 0;

}
