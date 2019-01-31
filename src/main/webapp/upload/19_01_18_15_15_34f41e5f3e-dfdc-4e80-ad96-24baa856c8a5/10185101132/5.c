#include <stdio.h>

int main()
{
	int sumOdd = 0, sumEven;
	int i;
	
	for( i = 1; i <= 100; i += 2 )
	{
		sumOdd += i;
	}

	for( i = 2; i <= 100; i += 2 )
	{
		sumEven += i;
	}
	
	printf( "%d %d", sumOdd, sumEven );
	return 0;
}