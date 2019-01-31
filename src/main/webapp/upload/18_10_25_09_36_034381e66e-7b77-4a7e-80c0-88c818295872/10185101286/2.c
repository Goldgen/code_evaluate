#include<stdio.h>
int main()
{
    float a,b,c,d,e,average;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    average=(a+b+c+d+e)/5;
    printf("%.1f",average);
    return 0;
}