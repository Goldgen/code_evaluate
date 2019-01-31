#include <stdio.h>
int main()
{
	int a,b,c;
	int sum1=0,sum2=0;
	for (a=1;a<14;a++)
	{
		for(b=1;b<19;b++)
		{
			for(c=1;c<33;c++)
			{
				sum1=7*a+5*b+c;
				sum2=a+b+3*c;
				if(sum1==100&&sum2==100)
				printf("%d %d %d",a,b,3*c);
			}
		}
	}
	return 0;
}