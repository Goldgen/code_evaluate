#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A;
    float B;
    float a;
    float b;
    float c;
    c=a-b;
    scanf("%f %f",&a,&b);
    A=abs(c);
    B=sqrt(A);
    printf("%.8f %.8f %.3f ",a,b,B);
    return 0;
}
