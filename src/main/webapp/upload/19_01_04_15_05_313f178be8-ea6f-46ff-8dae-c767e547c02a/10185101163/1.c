#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahr;
    double c;
    scanf("%lf",&fahr);
    c=(5*(fahr-32))/9;
    printf("celsius = %.0lf",c);
    return 0;
}
