#include <stdio.h>
#include <math.h>

int main()
{
    float A=0.0f;
    float B=0.0f;
    float result=0.0;
    scanf("%f %f",&A,&B);
    result=sqrt(abs(A-B));
    printf("%.8f\n%.8f\n%.3f",A,B,result);
    return 0;
}