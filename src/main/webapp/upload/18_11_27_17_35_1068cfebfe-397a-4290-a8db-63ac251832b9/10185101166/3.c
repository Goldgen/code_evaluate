#include<stdio.h>
#include<math.h>
int main()
{
	float amounts[5];
	for(int i = 0;i <= 4;i++)
	{
		scanf("%f",&amounts[i]);
	}
	long dollars[5] , cents[5];
	for(int m = 0;m <= 4;m++)
	{
		dollars[m] = amounts[m];
		cents[m] = (int)(dollars[m] * 100.0) % 100;
	}
	for(int n = 0;n <= 4;n++)
	{
		printf("$%.2f",amounts[n]);
		if(n < 4)
		{
			printf(" ");
		}
	}
}