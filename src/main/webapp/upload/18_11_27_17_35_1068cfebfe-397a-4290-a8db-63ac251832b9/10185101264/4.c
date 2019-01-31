#include <stdio.h>
int main()
{
	double num[11][5];
	for(int i = 0; i < 11; i++)
	{
		num[i][0] = 2.0 + (double)i / 10;
		num[i][1] = 1 / num[i][0];
		num[i][2] = num[i][0] * num[i][0];
		num[i][3] = num[i][2] * num[i][0];
		num[i][4] = num[i][3] * num[i][0];
		for(int j = 0; j < 4; j++)
			printf("%.4lf ", num[i][j]);
		printf("%.4lf\n", num[i][4]);
	}
}
