#include<stdio.h>

int main()
{
	int i,j;
	double amounts[5];
	for(i=0;i<=4;i++)
	{
		scanf("%lf",&amounts[i]);
	}
	for(j=0;j<=4;j++)
	{
		if(j==4) printf("$%.2f",amounts[j]);
		else printf("$%.2f ",amounts[j]);
	} 
	return 0;
}