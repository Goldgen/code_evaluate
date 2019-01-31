#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    double x,s=0;
    int n=5;
    for(;n>0;n--)
    {
        scanf("%lf",&x);
        s=s+x;
    }
    s=s/5;
    printf("%.1lf",s);

    return 0;
}