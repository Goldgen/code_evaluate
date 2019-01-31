#include <stdio.h>
int main()
{
    double m,n,t;
    m = 1;
    n = 1;
    t = 1;
    while(n>1e-6)
    {
        m += n;
        t++;
        n = n/t;




    }
    printf("%.6lf",m);
    return 0;
}