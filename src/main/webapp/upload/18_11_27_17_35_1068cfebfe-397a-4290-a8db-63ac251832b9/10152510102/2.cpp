#include<iostream>
#include<stdio.h>
int main()
{
	double data[101],sum=0;
	int i;
	for(i=1;i<=100;i++)
	{
		data[i]=1.00/(i*2*(i*2+1)*(i*2+2));
	}
	for(i=1;i<=100;i++)
	{
		if(i%2)
			sum+=data[i];
		else
			sum-=data[i];
	}
	printf("%.4lf",sum*4.0+3.0);
}