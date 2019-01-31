#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double d,p,r,m;
    scanf("%lf %lf %lf",&d,&p,&r);
    r=r/100;
    m=log(p/(p-d*r))/log(1+r);
    printf("%.0f",m);
    return 0;
}


