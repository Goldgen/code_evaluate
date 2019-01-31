#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d,p,r;
    scanf("%d%d%d",&d,&p,&r);
    double r_1=(double)r*0.01;
    double result=(double)log(p/(p-d*r_1))/log(1+r_1);
    printf("%.lf",result);
    return 0;
}