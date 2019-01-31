#include<stdio.h>
int main()
{
	double num[100],sum=0;
	for(int i=0;i<100;i++)
	{
		num[i]=1/((double)(2*i+2)*(2*i+3)*(2*i+4));
		if(i%2==0)
			sum+=num[i];
		else
			sum-=num[i];
	}
	sum=4.0*sum+3.0;
	printf("%.4lf",sum);
}
