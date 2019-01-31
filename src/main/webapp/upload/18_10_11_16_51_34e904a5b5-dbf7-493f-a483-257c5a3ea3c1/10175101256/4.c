#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    if(a>b)
    c=a-b;
    else
    c=b-a;
    float d=sqrt(c);
    printf("%.8f %.8f %.3f",a,b,d);
}