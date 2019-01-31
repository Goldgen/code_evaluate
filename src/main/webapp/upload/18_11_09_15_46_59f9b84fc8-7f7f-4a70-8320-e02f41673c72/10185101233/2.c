#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=1;
    double a=2;
    double b=1;
    double c;
    double sum=(double)a/b;
    while(n<50)
    {
        c=a;
        a+=b;
        b=c;
        sum+=(double)a/b;
        n++;
    }
    printf("%.2lf",sum);
    return 0;
}
