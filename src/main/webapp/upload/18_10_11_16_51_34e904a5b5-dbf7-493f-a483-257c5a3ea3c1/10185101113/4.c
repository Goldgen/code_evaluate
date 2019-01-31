#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;
    double D;
    
   
    scanf("%lf %lf",&A,&B);
    C=fabs(A-B);
    D=sqrt(C);
    printf("%.8lf %.8lf %.3lf",A,B,D);
    return 0;
}