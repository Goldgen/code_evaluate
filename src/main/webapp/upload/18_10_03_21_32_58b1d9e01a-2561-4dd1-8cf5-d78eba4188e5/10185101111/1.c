#include <stdio.h>
#include <math.h>

int main()
{
    double d,p,r,m;
    scanf("%lf %lf %lf",&d,&p,&r);
    m=log(p/(p-d*r*1.0/100))/log(1+r*1.0/100);
    printf("%.0f",m);
    return 0;



}