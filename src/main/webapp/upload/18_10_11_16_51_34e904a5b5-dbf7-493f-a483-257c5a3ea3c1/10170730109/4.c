#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    double c;
    c=sqrt(abs(a-b));
    printf("%.8f %.8f %.3f",a,b,c);
    return 0;
}