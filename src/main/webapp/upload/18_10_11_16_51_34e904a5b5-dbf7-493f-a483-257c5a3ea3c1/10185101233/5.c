#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    long long b;
    a = 10*9*8*7*6*5*4*3*2*1;
    b = (long long)20*19*18*17*16*15*14*13*12*11*a;
    printf("%d\n%lld",a,b);
    return 0;
}
