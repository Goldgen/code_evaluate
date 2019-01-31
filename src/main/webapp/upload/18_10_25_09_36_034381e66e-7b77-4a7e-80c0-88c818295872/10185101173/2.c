#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,e;
    double f;
    scanf ("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    printf("%.1lf",f);
    return 0;
}
