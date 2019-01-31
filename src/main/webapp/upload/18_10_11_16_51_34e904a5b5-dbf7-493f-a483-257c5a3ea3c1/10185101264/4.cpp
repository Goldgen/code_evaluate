#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;

    scanf("%lf %lf",&a,&b);
    if(a<=b)
        c=b-a;
    else
        c=a-b;

    d=sqrt(c);

    printf("%.8lf %.8lf %.3lf",a,b,d);

    return 0;
}