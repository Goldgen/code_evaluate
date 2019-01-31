#include <stdio.h>
#include <stdlib.h>

int main()
{
    double f;
    scanf("%lf",&f);
    int c=5*(f-32)/9;
    printf("celsius = %d",c);
    return 0;
}
