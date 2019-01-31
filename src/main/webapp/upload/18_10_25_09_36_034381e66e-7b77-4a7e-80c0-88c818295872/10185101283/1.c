#include<stdio.h>
int main()
{
    double h=100.0;
    double x =50.0;
    for(int i=1;i<=9;++i)
    {
        h= h + 2.0 * x;
        x = x/2.0;
    }
    printf("%.3lf %.3lf",h,x);
    return 0;
}
