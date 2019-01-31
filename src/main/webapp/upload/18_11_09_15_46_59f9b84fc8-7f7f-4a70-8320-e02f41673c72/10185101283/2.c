#include<stdio.h>
int main()
{
    double a=2.0,b=1.0;
    double x=0.0;
    for(int i=1;i<=50;++i)
    {
        x+=a/b;
        a=a+b;
        b=a-b;
    }
    printf("%.2f",x);
    return 0;
}
