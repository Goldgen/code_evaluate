#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f",&a,&b);
    c = sqrt(abs(a-b));
    printf("%.8f %.8f %.3f",a,b,c);
    return 0;
}
