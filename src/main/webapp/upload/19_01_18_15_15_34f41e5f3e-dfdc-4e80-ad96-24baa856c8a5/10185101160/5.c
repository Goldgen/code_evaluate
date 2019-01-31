#include <stdio.h>
int main()
{
	int a,b,sum1=0,sum2=0;
	for(a=1;a<100;a+=2)
	{
		sum1+=a;
	}
	for(b=2;b<101;b+=2)
	{
		sum2+=b;
	}
	printf("%d %d",sum1,sum2);
	return 0;	
}