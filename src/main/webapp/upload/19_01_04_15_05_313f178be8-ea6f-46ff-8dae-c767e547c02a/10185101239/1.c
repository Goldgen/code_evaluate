#include <stdio.h>
#include <stdlib.h>

int main()
{
    double f;
    int c;
    scanf("%lf",&f);
    c = 5*(f-32)/9;
    printf("celsius = %d",c);
    return 0;
}