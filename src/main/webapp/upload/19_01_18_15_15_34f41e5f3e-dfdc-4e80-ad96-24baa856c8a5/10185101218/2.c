#include<stdio.h>
int main(void)
{
    double a,b,e;
    e=1.0;
    a=1.0;
    for(b=1.0;b>=0.000006;a++)
    {
        b=b/a;
        e=e+b;
    }
    printf("%.6lf",e);
    return 0;
}
