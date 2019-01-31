#include<stdio.h>
#include<math.h>
int main()
{
	double arr[100],sum=0;
	int i,j=3;
	for(i=0;i<=99;i++)
	{
		arr[i]=1.0/(j-1)/j/(j+1);
		j+=2;
		sum=sum+arr[i]*pow(-1,i);
	}
	sum=sum*4.0+3.0;
	printf("%.4lf",sum);
	return 0;
	


 } 