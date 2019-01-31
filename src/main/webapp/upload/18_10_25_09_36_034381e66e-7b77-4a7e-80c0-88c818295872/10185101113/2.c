#include<stdio.h>
int main()
{
	double a,sum,n=5;
	for(int i=1;i<=5;i++)
	{
		scanf("%lf",&a);
	    sum+=a;
	}
	printf("%.1lf",sum/n);
	return 0;
}
