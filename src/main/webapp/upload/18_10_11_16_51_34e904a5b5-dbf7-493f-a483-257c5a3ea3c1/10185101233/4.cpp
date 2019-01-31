#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c = |a-b|^0.5;
    printf("%.3lf",c);
    return 0;
}