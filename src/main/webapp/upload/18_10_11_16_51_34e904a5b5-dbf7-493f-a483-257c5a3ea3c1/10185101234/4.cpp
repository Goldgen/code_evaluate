#include<stdio.h>
#include<math.h>
int main()
{
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    scanf("%lf\n%lf",&a,&b);
    e=a-b;
    d=fabs(e);
    c=sqrt(d);
    printf("%.8f %.8f %.3f",a,b,c);
    return 0;
}