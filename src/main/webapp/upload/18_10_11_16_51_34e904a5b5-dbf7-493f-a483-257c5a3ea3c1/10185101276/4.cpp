#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,c;
    scanf("%lf %lf",&A,&B);
    if (A>B)
        c=A-B;
     else c=B-A;
        c=pow(c,0.5);
        printf("%.8lf %.8lf %.3lf",A,B,c);
    return 0;
}
