#include<stdio.h>
int main()
{
	int i = 0;
	double a[5],b[5];
	scanf("%lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for(;i<=4;i++)
	{
	
		b[i] = 1.0/a[i];
		printf("%.2lf",b[i]);
		if(i!= 4)
		printf(" ");
	}
	printf("\n%.6lf",b[0]+b[1]+b[2]+b[3]+b[4]);
}