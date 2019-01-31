#include<stdio.h>
int main()
{
	double num[5],sum=0;
	for(int i=0;i<5;i++)
	{
		scanf("%lf",&num[i]);
		num[i]=1.0/num[i];
		sum+=num[i];
	}
	for(int i=0;i<4;i++)
		printf("%.2lf ",num[i]);
	printf("%.2lf\n%.6lf",num[4],sum);
}
