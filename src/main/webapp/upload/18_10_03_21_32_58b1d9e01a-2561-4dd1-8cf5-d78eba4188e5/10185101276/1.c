#include <stdio.h>
#include <math.h>
int main()
{
    int d,p;
    double r,m;
    scanf("%d %d %lf",&d,&p,&r);
    r=r/100.0;
    m=log(p/(p-d*r))/log(1+r);
    printf("%.0f",m);
    return 0;
}
