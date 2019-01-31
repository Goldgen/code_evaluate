#include<stdio.h>
#include<math.h>
int main()
{
	double data[100] , b = 0 , c = 0;
	for(int i = 1;i <= 100;i++)
	{
		data[i - 1] = 1 / (2.0*i*(2.0*i+1.0)*(2.0*i+2.0));
	}
	for(int m = 0;m <= 99;m++)
	{
		b = b + pow(-1,m)*data[m];
	}
	c = b * 4.0 + 3.0;
	printf("%.4lf",c);
}