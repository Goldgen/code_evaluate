#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int celsius;
    double fahr;
    scanf("%lf",&fahr);
    celsius=5.0*(fahr-32.0)/9.0;
    printf("celsius = %d",celsius);
    return 0;
}
