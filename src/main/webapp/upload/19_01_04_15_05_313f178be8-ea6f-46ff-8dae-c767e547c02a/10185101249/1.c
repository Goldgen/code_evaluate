#include <stdio.h>
int main()
{
    double a;
    int b;
    scanf("%lf",&a);
    b=((double)(a-32.0)/9.0*5);
    printf("celsius = %d",b);
    return 0;
}
