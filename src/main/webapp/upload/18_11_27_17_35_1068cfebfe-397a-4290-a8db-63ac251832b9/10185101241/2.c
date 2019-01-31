#include<stdio.h>
#include<math.h>

int main()
{
	double data[100],sum=0,end;
	for(int i=0;i<=99;i++)
	{
		data[i]=1.0/(8*i*i*i+36*i*i+52*i+24);
	}
	for(int j=0;j<=99;j++)
	{
		sum+=pow(-1,j+2)*data[j]; 
	}
	end=4.0*sum+3.0;
	printf("%.4f",end);
	return 0;
} 