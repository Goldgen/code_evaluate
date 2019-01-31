#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%.8f %.8f %.3f",a,b,sqrt(abs(a-b)));
    return 0;
}
