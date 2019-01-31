#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ans=0;
    unsigned long long answ=0;
    ans = 10*9*8*7*6*5*4*3*2*1;
    answ = 20*19*18*17*16*15*14*13*12*11*10*9*8*7*6*5*4*3*2*1;
    printf("%lld\n",ans);
    printf("%ull",answ);
    return 0;
}
