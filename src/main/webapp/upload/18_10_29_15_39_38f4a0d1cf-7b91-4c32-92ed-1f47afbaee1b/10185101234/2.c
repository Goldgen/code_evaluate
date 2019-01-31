#include<stdio.h>
int main()
{
    double b=1;
    double m=1;
    double E=0;
    double f=1;
    while((double)(1/m)>(double)(1/1000000))
    {
        m=m*b;
        ++b;
        f=f+(double)(1/m);
    }
    E+=f;
    printf("%.6f",E);
    return 0;
}