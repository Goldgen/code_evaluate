#include<stdio.h>
int main()
{
    long  a=1;
    long  b=1;
    float result=0.0f;
     double x =1.0;
    for(;b<=10e6;++a)
    {
        b=1;
    for(long i=1;i<=a;++i)
    {
           b=b*i;
    }
    x=(double)1/b;
    result +=x;
    }
    printf("%.6f",result+1);
    return 0;
}
