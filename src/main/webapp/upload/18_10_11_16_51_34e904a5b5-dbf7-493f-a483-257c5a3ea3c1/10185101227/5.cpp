#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    long long b;
    a=10*9*8*7*6*5*4*3*2*1;
    b=(long long)20*19*18*17*16*15*14*13*12*11*a;
    printf("%d\n%LLd",a,b);
    return 0;
}
