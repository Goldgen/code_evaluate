#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A,B,C,D;
    scanf("%lf %lf",&A,&B);
    if (A>=B) C=A-B;
    else C=B-A;
    D=sqrt(C);
    printf("%.8lf %.8lf %.3lf",A,B,D);
    return 0;
}