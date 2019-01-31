#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A,B,a,b;
    scanf("%f %f",&A,&B);
    a=abs(A-B);
    b=sqrt(a);
    printf("%.8f %.8f %.3f",A,B,b);
    return 0;
}
