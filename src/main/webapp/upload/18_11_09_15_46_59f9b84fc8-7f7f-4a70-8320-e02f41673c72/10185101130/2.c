#include<stdio.h>

int main(void)
{
    double m = 1.0,n = 2.0;
    double t;
    t = n/m;
    for(int i = 1;i <= 49;i++)
    {
        n += m;
        m = n - m;
        t += n/m;
    }
    printf("%.2lf",t);
    return 0;

}
