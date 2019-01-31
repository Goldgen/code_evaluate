#include <stdio.h>
#include <math.h>


int main(void)
{
    double A = 0.0;
    double B = 0.0;
    double answer = 0.0;

    scanf("%.8f %.8f",&A,&B);
    answer = (A-B)*(A-B);
    printf("%.8f %.8f %.8f",A,B,answer);

    return 0;
}
