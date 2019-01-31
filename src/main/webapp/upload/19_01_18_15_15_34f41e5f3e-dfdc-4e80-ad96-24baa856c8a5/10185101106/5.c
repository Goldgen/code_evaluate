#include <stdio.h>
int main()
{	int sum1=0,sum2=0;
	for(int i=1;i<=99;i=i+2)
	sum1=sum1+i;
	for(int i=0;i<=100;i=i+2)
	sum2+=i;
	printf("%d %d",sum1,sum2);
	return 0;
}