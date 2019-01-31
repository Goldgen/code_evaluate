#include<stdio.h>
int main()
{
    long a;
    a=10*9*8*7*6*5*4*3*2*1;
    long long b;
    b=(long long)20*19*18*17*16*15*14*13*12*11*a;
    printf("%d\n",a);
    printf("%lld",b);
    return 0;
}