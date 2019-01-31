#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{   double  A,B;
    scanf("%lf %lf",&A,&B);
    double  C=sqrt(fabs(A-B));
    printf("%.8lf %.8lf %.3lf",A,B,C);
    return 0;
}