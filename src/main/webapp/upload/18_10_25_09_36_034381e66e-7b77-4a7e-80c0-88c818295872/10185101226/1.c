#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=100;
    double h=100;
    int n;
    for(n=2;n<=10;++n)
    {
        h=h/2;
        a=a+h*2;
    }
        h=h/2;
        printf("%.3lf %.3lf",a,h);
    return 0;
}
