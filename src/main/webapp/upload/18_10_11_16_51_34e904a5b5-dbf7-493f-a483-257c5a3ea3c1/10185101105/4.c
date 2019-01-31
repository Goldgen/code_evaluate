#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double A=0.0,B=0.0,C=0.0,D=0.0;
    scanf("%lf %lf",A,B);
    C=fabsf(A-B);
    D=sqrtf(C);
    printf("%.8lf %.8lf %.3lf",A,B,D);
    return 0;
}