#include <stdio.h>
int main()
{
	unsigned long long x,p,n,y;
	scanf("%llu%llu%llu",&x,&p,&n);
	y=x<<(64-p-1);
	y=y>>(64-n);
	printf("%llu",y);
	return 0;
 } 