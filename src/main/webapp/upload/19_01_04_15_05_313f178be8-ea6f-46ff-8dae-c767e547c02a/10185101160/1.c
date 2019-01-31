#include <stdio.h>
int main()
{
	double fahr;
	int celsius;
	scanf("%lf",&fahr);
	celsius = 5*(fahr - 32)/9;
	printf("celsius = %d",celsius);
	return 0;
}
