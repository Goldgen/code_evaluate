#include <stdio.h>

int main()
{
	long long int a,b,c,d,e;
	int i,j,n=0;
	scanf("%lld %lld",&a,&b);e=a;
	do
	{
		n++;
		e=e/10;
		
	}while(e>0)
	;for(i=0;i<b%n;i++)
	{
		c=a/10;
		d=a%10;
		for(j=1;j<n;j++)
			d*=10;
		a=c+d;
	}
	printf("%d %lld",n,a);
	return 0;
}