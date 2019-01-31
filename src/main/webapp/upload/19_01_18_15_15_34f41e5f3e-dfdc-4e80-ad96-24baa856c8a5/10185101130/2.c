#include<stdio.h>

int main(void)
{
	double a=1;  
	double b=1;
	for(int i = 1;i <= 1e3;i++)
	{
		a=1.0;
		for(int j = 1;j <= i;j++)
		
			a*=1.0/j;
		
		b+=a;
	}
	printf("%.6lf",b);
	return 0;
	
}