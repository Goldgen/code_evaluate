#include <stdio.h>


int main (void)

{
    double a[50] = {0};
    double b[50] = {0};
    int i = 0;

    a[0] = 2;a[1] = 3;
    b[0] = 1;b[1] = 2;

    double s = a[0]/b[0]+a[1]/b[1];
    for(i=2;i<=49;i++)
    {
        a[i]=a[i-1]+a[i-2];
        b[i]=b[i-1]+b[i-2];
        s += a[i] / b[i];
    }
    printf("%.2lf",s);
}
