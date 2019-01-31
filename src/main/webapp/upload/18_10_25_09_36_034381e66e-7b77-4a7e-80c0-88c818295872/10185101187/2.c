#include <stdio.h>

int main()
{
    float A, B, C, D, E, F;
    scanf("%f %f %f %f %f", &A, &B, &C, &D, &E);

    F = (A + B + C + D + E)/5;

    printf("%.1f", F);
    return 0;
}