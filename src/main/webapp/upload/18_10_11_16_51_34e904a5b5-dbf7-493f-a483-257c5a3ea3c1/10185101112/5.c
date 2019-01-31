#include <stdio.h>

int main()
{
    long long result1=0LL;
    unsigned long long result2=0ULL;
    result1=10*9*8*7*6*5*4*3*2*1;
    result2=20*19*18*17*16*15*14*13*12*11*10*9*8*7*6*5*4*3*2*1;
    printf("%lld\n",result1);
    printf("%ull",result2);
    return 0;
}