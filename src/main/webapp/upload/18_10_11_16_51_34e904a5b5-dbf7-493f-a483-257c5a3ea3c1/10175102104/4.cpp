#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,d;
    scanf("%lf %lf",&a,&b);
    c=a-b;
    if(c<0)
    {
        c=-c;
    }
    d=sqrt(c);
    printf("%.8lf %.8lf %.3lf",a,b,d);
    return 0;
}
