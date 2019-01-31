#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=sqrt(fabs(a-b));
    printf("%.8lf %.8lf %.3lf",a,b,c);
    return 0;
}
