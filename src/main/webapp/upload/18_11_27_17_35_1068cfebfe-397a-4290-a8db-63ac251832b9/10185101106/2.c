#include<stdio.h>
int main()
{
	double data[100];
	double a = 2,b = 3,c = 4;
	int i=0;
	for(;a<=200;a+=2,b+=2,c+=2,i++)
	{
		data[i] = 1/(a*b*c);}
	double sum = 0;
	for(int j=0;j<=99;j++)
	{
		if(j%2== 0)
		sum = sum + data[j];
		else
		sum = sum - data[j];
	}
	printf("%.4lf",4.0*sum+3.0);
	
 } 