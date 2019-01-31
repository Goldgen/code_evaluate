#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d,p,r,m;

    scanf("%f%f%f",&d,&p,&r);
    r=r/100.0;
    m=log(p/(p-d*r))/log(1.0+r);
    printf("%.0f",m);
    return 0;
}