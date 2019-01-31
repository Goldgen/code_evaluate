#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    double h=100,s=0;
    int n;
    for(n=10;n>0;n--)
    {
        s=s+h+h/2;
        h=h/2;
    }
    s=s-h;
    printf("%.3lf %.3lf",s,h);
    return 0;
}