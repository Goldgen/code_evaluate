#include<stdio.h>
int main()
{
	unsigned long long x,p,n,a,e,f,jieguo;
	scanf ("%llu %llu %llu",&x,&p,&n);
	e=x<<(64-p+n-1);
	e=e>>(64-p+n-1);
	f=x>>(p+1);
	f=f<<(p+1);
	x=~x;
	a=x<<(64-p-1);
	a=a>>(64-n);
	a=a<<(p-n+1);
	jieguo=f+e+a;
	printf ("%llu",jieguo);
}