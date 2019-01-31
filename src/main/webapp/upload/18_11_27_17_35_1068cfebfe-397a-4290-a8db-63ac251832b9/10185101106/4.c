#include<stdio.h>
int main()
{
	double a = 2;
	double data[11][5];
	for(int j=0;j<=10;j++)
	{
		data[j][0] = a + j*0.1;
		data[j][1] = 1/data[j][0];
		data[j][2] = data[j][0]*data[j][0];
		data[j][3] = data[j][0]*data[j][0]*data[j][0];
		data[j][4] = data[j][0]*data[j][0]*data[j][0]*data[j][0];
	}
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<=4;j++)
		{
			printf("%.4lf",data[i][j]);
			if(j!=4)
			printf(" ");
		}
		if(i!=10)
		printf("\n");
	}
	return 0;
 } 