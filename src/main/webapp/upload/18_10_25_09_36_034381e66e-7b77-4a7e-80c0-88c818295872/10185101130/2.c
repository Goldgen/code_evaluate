#include<stdio.h>

int main(void)
{
	double a=0;
	int   i=1;
	double ave=0;
	double total=0;
	while(i<=5){
		scanf("%lf",&a);
		total+=a;
		i++;
		
	}
	ave=total/(i-1);
	printf("%.1lf",ave);
	return 0;
 } 