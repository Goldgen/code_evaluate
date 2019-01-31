#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temp;
    scanf("%lf", &temp);
    printf("celsius = %d", (int)((temp - 32)* 5.0 / 9.0));
    return 0;
}