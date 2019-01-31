#include<stdio.h>

int main(void)
{
	int sum1=0,sum2=0;
	for(int i=1;i<=100;++i)
	{
		if(i%2==0)
			sum2+=i;
		else
			sum1+=i;
	}
	printf("%d %d",sum1,sum2);
	return 0;
}
