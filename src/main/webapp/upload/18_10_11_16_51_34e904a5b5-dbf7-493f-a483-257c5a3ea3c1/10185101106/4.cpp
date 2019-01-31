#include <stdio.h>
#include <math.h>

int main()
{
    float A,B,C;
    scanf("%f%f",&A,&B);
    if(A>B)
        C=sqrt(A-B);
    else
        C=sqrt(B-A);

    printf("%.8f %.8f %.3f",A,B,C);
    return 0;

}
