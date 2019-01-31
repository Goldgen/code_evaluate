#include<iostream>
#include<stdio.h>
int main()
{
	float amounts[6];
	long dollars[6],cents[6];
	scanf("%f %f %f %f %f",&amounts[1],&amounts[2],&amounts[3],&amounts[4],&amounts[5]);
	int i;
	for(i=1;i<=5;i++)
	{
		dollars[i]=amounts[i];
		cents[i]=(amounts[i]*1000-dollars[i]*1000+5)/10;
	}
	for(i=1;i<5;i++)
	{
		if(cents[i]!=0)
			printf("$%ld.%ld ",dollars[i],cents[i]);
		else
			printf("$%ld.00 ",dollars[i]);
	}
	if(cents[5]!=0)
		printf("$%ld.%ld",dollars[5],cents[5]);
	else
		printf("$%ld.00 ",dollars[5]);
	return 0;
}