#include <stdio.h>
#include <stdlib.h>

const double k = 5.0 / 9.0;

int main()
{
    double f = 0.0;
    scanf("%lf", &f);
	
    double c = f * k - 32.0 * k;
	//c += 1e-6;
	
    printf("celsius = %d", (int)c);
    return 0;
}
