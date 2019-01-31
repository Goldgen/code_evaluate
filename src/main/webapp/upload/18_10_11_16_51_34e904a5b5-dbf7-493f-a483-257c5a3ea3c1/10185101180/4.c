#include <stdio.h>
int main()
{
    float A,B,result;
    scanf("%f",&A);
    scanf("%f",&B);
    result=(A-B)*(A-B);
    printf("%.8f %.8f %.3f",A,B,result);
    return 0;
}
