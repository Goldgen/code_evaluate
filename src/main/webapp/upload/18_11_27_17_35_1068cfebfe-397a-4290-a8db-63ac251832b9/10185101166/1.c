#include<stdio.h>
int main()
{
	double a[5] , b = 0;
	for(int i = 0;i <= 4;i++)
	{
		scanf("%lf",&a[i]);
		printf("%.2lf",1.0 / a[i]);
		if(i < 4)
		{
			printf(" ");
		}
		b = b + 1.0 / a[i];
	}
	printf("\n%.6lf",b);
}