#include <stdio.h>
int main(void)
{
    float a,b,c,d,e,f;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    printf("%.1f",f);
    return 0;
}