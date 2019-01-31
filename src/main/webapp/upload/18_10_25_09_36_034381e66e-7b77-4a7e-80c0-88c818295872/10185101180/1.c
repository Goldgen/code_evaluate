#include <stdio.h>
int main()
{
    double h,H,n;
    h=100,n=1,H=100;
    while(n<10)
    {
        h=h/2;
        H=H+2*h;
        n=n+1;
    }
    h=h/2;
    printf("%.3lf %.3lf",H,h);
    return 0;
}
