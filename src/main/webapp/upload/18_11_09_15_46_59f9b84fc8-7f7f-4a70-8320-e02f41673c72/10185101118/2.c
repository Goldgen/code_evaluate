#include<stdio.h>
int main()
{
    double n=0,a=1,b=2,t;
    for(int i=1;i<=50;i++)
    {
        n+=b/a;
        t=b;
        b=a+b;
        a=t;
    }
    printf("%.2lf",n);
    return 0;
}