#include <stdio.h>
#include <stdlib.h>

int main()
{
    double H0=100.0;
    double distance=100.0;
    double H;
    int i=2;
    while (i<=10)
    {
        H0=H0/2;
        distance +=H0*2;
        H=H0/2;
        ++i;
    }
    printf("%.3lf %.3lf",distance,H);
    return 0;
}
