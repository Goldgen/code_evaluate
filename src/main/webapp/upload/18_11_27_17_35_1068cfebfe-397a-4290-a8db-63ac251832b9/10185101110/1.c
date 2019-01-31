#include<stdio.h>
int main()
{
	double arr[5],brr[5],sum=0;
	int i;
	for(i=0;i<=4;i++)
	{
		scanf("%lf",&arr[i]);
		brr[i]=1.0/arr[i];
		sum=sum+brr[i];
		if(i==4)
		printf("%.2lf",brr[i]);
		else
		printf("%.2lf ",brr[i]);
		
	}
	
	printf("\n%.6lf",sum) ;
	return 0;
 } 