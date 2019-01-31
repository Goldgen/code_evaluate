#include <stdio.h>
#include <math.h>
int main()
{
    float A=0.0;
    float B=0.0;
    float c=0.0;
    scanf("%f %f",&A,&B);
    c=fabs(A-B);
    c=sqrt(c);
    printf("%.8f %.8f %.3f",A,B,c);
    return 0;
}
