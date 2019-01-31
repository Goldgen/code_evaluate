#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cel=0;
    double fah=0.0;
    scanf("%lf",&fah);
    cel = 5*(fah-32)/9;
    printf("celsius = %d",cel);
    return 0;
}
