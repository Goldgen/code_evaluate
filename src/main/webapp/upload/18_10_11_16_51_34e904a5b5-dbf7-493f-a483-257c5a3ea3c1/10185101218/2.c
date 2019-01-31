#include<stdio.h>
int main()
{
    float A,B,C,D;
    scanf("%f%f",&A,&B);
    if(A>B)
        C=A-B;
    else
        C=B-A;
    D=sqrt(C);
    printf("%.8f %.8f %.8f",A,B,D);
    return 0;
}
