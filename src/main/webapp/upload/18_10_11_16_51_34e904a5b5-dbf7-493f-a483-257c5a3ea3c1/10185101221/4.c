#include <stdio.h>
#include <math.h>

int main()
{
    float A,B,c;
    scanf("%f %f",&A,&B);
    c = sqrt(fabs(A-B));
    printf("%.8f %.8f %.3f",A,B,c);
    return 0;
}
