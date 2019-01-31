#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A,B,C;
    scanf("%f %f",&A,&B);
    C=abs(A-B);
    printf("%.8f %.8f %.8f",A,B,sqrt(C));
}
