#include <stdio.h>
int main()
{
	int n=100,a=0,b=0,c=0;
	for(;n<=999;n++)
	{
		a=n/100;
		b=n/10-a*10;
		c=n%10;
		if(n==a*a*a+b*b*b+c*c*c&&n!=407)
		printf("%d ",n);
		if(n==407)
		printf("%d",n);
	}
    return 0;
} 