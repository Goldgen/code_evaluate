#include <stdio.h>
#include <math.h>
int main(void)
{
    double d=0;
    double p=0;
    double r=0;
    float m=0;

    scanf("%lf %lf %lf",&d,&p,&r);
    r=r/100;
    m=log(p/(p-d*r))/log(1+r);
    m=m+0.5;
    printf("%.0lf",m);
    return 0;
}
