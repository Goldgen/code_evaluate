#include<stdio.h>
int main(void)
{
    double a=100;
    double b=100;
    int c=0;
    for(;c<10;++c)
    {
        a=a/2;
        b=b+2*a;
    }
    printf("%.3lf %.3lf",b-2*a,a);
    return 0;
}
