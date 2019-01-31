
#include<stdio.h>
#include<math.h>
int main(void)
{
    double a;
    double b;
    double c;
    double d,e;
    scanf("%f %f",&a,&b);
    c=a-b;
    d=abs(c);
    e=sqrt(d);
    printf("%.8f %.8f %.3f",a,b,e);
    return 0;




}
