#include <stdio.h>
int main()
{
	unsigned long long int x;
	unsigned int p,n;
	scanf("%llu%u%u",&x,&p,&n);
	unsigned int t = p - n + 1;
	for (p;p>=t;p--)
	  x ^= (1 << (p) );


    printf("%d",x);
	return 0;



 }
