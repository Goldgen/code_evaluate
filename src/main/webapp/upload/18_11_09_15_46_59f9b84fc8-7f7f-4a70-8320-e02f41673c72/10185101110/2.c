#include<stdio.h>
int main()
{
	float sum=0,a,i=2,j=1,xs=1;
	for(;xs<=25;xs++)
	{
		a=i/j;
		sum+=a;
		j=i+j;
		a=j/i;
		sum+=a;
		i=i+j;
		
	}
	printf("%.2f",sum);
	return 0;
	
 } 