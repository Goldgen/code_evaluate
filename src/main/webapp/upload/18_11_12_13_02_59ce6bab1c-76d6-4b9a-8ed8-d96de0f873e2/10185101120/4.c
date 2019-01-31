#include<stdio.h>
int main()
{
	long long n,a=0,b,c,sum=0;
	scanf ("%lld",&n);
	for (b=1;n;n/=10,b++){
		a=n%10;
		for (c=1;c<b;c++){
			a*=8;
		}
		sum+=a;
	}
	printf ("%lld",sum);
}