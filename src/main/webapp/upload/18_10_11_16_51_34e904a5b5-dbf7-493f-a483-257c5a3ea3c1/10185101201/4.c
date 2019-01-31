#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float A,B,C;
    scanf("%f %f",&A,&B);
    C=abs(A-B);
    printf("%.3f %.3f %.8f",A,B,sqrt(C));
}
