#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahr;
    scanf("%lf", &fahr);
    int cel = 5.0 * (fahr - 32) / 9.0 * 1000;
    double cel_int = cel / 1000.0;
    cel = cel_int;
    printf("celsius = %d", cel);
    return 0;
}
