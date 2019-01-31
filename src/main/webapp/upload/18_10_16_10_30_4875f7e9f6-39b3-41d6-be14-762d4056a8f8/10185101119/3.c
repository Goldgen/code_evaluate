#include <stdio.h>
int main()
{
	unsigned long long x,p,n,z,y,bian,jieguo;
	scanf("%llu%llu%llu",&x,&p,&n);
	z=x>>(p+1);
	z=z<<(p+1);
	y=x<<(64-p+n-1);
	y=y>>(64-p+n-1);
	bian=x<<(64-p-1);
	bian=bian>>(64-n);
	bian=bian<<(p-n+1);
	bian=~bian;
	bian=bian<<(64-p-1);
	bian=bian>>(64-n);
	bian=bian<<(p-n+1);
	jieguo=z+y+bian;
	printf("%llu",jieguo);
	return 0;
 } 