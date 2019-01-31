#include<stdio.h>
#include<math.h>
int main()
{
	double data[11][5];
	data[0][0] = 2.0;
	for(int i = 1;i < 11;i++)
	{
		data[i][0] = data[i-1][0] + 0.1;
	}
	for(int m = 0;m <= 10;m++)
	{
		for(int n = 1;n <= 4;n++)
		{
			switch (n)
			{
				case 1:data[m][n] = 1.0 / data[m][0];
				break;
				case 2:data[m][n] = pow(data[m][0],2);
				break;
				case 3:data[m][n] = pow(data[m][0],3);
				break;
				case 4:data[m][n] = pow(data[m][0],4);
				break;
				default:;	break;
			}
		}
	}
	for(int p = 0;p <= 10;p++)
	{
		for(int u = 0;u <= 4;u++)
		{
			printf("%.4lf",data[p][u]);
			if(u<4)
			printf(" ");
		}
		if(p<10)
		printf("\n");
	}
}