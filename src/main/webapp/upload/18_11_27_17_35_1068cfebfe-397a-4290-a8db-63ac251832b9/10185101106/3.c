#include<stdio.h>
int main()
{
	double amounts[5],cents[5],a[5];
	int dollars[5];
	scanf("%lf %lf %lf %lf %lf",&amounts[0],&amounts[1],&amounts[2],&amounts[3],&amounts[4]);
	int i = 0;
	for(;i<=4;i++)
	{
		dollars[i]=(int)amounts[i];
		a[i]=100*amounts[i];
		cents[i]=(((int)a[i])%100)/100.0;
	}
	for(int i=0;i<=4;i++)
	{
		printf("$%.2lf",dollars[i]+cents[i]);
		if(i != 4)
		printf(" ");
	}
	
	
 } 