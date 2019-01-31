#include <stdio.h>
#include <math.h>

int main(void)
{
    double d,p,r;
    double sum;
    scanf("%lf %lf %lf",&d,&p,&r);
    r /= 100;
    sum = log(p/(p - d*r))/log(1+r);
    sum += 0.5;
    printf("%d",(int)sum);
    return 0;
}
