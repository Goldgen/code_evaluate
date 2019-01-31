#include <stdio.h>
#include <float.h>

int main()
{
	int cnt = 0;
	double i = 1, j = 2, temp;
	double sum = 2;
	for( cnt = 1; cnt < 50; cnt++,sum += j / i )
	{
		temp = i + j;
		i = j;
		j = temp;
	}
	printf( "%.2lf", sum );

	return 0;
}
