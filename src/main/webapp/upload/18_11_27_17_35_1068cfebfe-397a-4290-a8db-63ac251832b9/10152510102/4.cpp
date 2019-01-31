#include<iostream>
#include<stdio.h>
double fun(double n,int j)
{
	int i;
	double sum=1.00;
	for(i=1;i<=j;i++)
		sum/=n;
	return sum;
}
int main()
{
	int j,i;
	double data[11][5];
	for(i=0;i<11;i++)
	{
		double n=i*0.1+2.0;
		for(j=0;j<5;j++)
		{
			if(j==0)
				data[i][j]=n;
			else
				data[i][j]=fun(n,j);
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
			if(j==4)
				printf("%.4lf\n",data[i][j]);
			else
				printf("%.4lf ",data[i][j]);
	}
	for(j=0;j<5;j++)
			if(j==4)
				printf("%.4lf",data[10][j]);
			else
				printf("%.4lf ",data[10][j]);
	return 0;
}