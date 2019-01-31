#include <stdio.h>
#include<stdlib.h>
#include <math.h>
 int main()
 {
    float a,b,c,d;
    scanf("%f %f",&a,&b);
    c = abs(a-b);
    d=sqrt (c);
    printf("%.8f %.8f %.3f",a,b,d);
 }