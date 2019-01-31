#include<stdio.h>
#include<string.h>
int main()
{
	double array[5],array2[5];
 	double x = 0.00,total = 0.00;
	int i,j;
	for(i=0;i<5;i++)
		scanf("%lf",&array[i]);
	x = 1.00 / array[0];
	array2[0] = x;
	printf("%.2lf",array2[0]);
	total = x;
	for(j=1;j<5;j++)
		{
			x = 1.00 / array[j];
			array2[j] = x;
			printf(" %.2lf",array2[j]);
			total += x;
		}
	printf("\n%.6lf",total);
	return 0;
}
