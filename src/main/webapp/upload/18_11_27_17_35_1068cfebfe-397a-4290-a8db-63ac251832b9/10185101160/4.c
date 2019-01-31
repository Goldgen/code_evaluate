#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	double data[11][5];
	double x=2.0;
	int i=0,j=0;
	for(j=0;i<11;i++)
	{
		data[i][0] = x;
		x += 0.1;
	}
	for(i = 0 ; i < 11 ; i ++)
	{
		x = data[i][0];
		data[i][1] = 1.0 / x;
		printf("%.4lf %.4lf",data[i][0],data[i][1]);
		for( j = 2 ; j < 5 ; j ++)
		{
			data[i][j] = pow(x,j);
			printf(" %.4lf",data[i][j]);	
		}
		printf("\n");
	}	
	return 0;
}
