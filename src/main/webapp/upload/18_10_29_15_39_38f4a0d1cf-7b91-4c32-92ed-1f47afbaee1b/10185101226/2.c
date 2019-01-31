#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double e=1;
    int i;
    int n;
    int j=1;
    for(n=1;n<=10;++n)
    {
        for(i=1;i<=n;++i)
        {
           j*=i;
        }
        e+=(double)1.0/j;
    }
    printf("%.6lf",e);
    return 0;
}