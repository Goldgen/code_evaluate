#include <stdio.h>
#include <math.h>

main()
{
    unsigned int x,p,n = 0;
    scanf("%u %u %u",&x,&p,&n);
    int rev = 1;
    int dig = 0;
    while(dig<p-n+1)
    {
    rev = rev << 1;
    dig = dig + 1;
    }
    while(dig>=p-n+1&&dig<=p)
    {
        x = x ^ rev;
        rev = rev << 1;
        dig++;
    }
    printf("%u",x);
}
