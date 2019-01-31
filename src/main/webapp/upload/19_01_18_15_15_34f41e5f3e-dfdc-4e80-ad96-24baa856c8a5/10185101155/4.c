#include <stdio.h>
int main()
{
    double a,b;
    a= 0.0;
    b= 10000000000.0;
    double n;
    while(scanf("%lf",&n)&&n>=0)
    {
        a = (a>=n)?a:n;
        b = (b<=n)?b:n;

    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",a,b);
    return 0;
}
