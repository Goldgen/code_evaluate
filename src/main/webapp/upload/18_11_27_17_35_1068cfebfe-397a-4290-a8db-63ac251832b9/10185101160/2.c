#include<stdio.h>
#include<string.h>
int main()
{
	double data[100];
	double x = 0.00,sum1 = 0.00,sum2 = 0.00,pro = 0.00;
	int i,j,k;
	for(i = 1 ; i <= 100 ; i ++ )
		{
			x = 1.00 / ( (2 * i) * (2 * i + 1) * (2 * i + 2) );
			data [i - 1] = x;
		}
	for(j = 0;j <= 100; j += 2)
		sum1 += data[j];
	for(k = 1;k <= 100; k+=2)
		sum2 += data[k];
	pro = ( sum1 - sum2 ) * 4.0 + 3.0;
	printf("%.4lf",pro);
	return 0;
}
