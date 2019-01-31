#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A,B;
    scanf("%lf %lf",&A,&B);
    double n;
    n=abs(A-B);
    n=sqrt(n);
    printf("%.8f %.8f %.3f",A,B,n);
    return 0;
}
