#include<stdio.h>
int main(void)
{
    double a,b;
    int n=0;
    a=100;
    b=100;
    while(n<10)
    {
        if(n==9)
        {
            a=a/2;
            n++;
        }
        else
        {a=a/2;
        b=b+a*2;
        n++;
        }
    }
    printf("%.3lf %.3lf",b,a);
    return 0;
}
