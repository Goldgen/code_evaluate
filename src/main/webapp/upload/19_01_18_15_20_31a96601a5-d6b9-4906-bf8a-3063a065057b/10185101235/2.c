#include <stdio.h>
#include <math.h>

main()
{
    unsigned int x,p,n = 0;
    long long int s = 0;
    int val = 0;
    double dig = 0;
    scanf("%u %u %u",&x,&p,&n);
    while (x >= 1)
    {
        val = x % 2;
        if (dig>=(p-n+1)&&dig<=p&&val==1)
        {
            s = s + pow(2,dig-p+n-1);
        }
        dig = dig + 1;
        x = x / 2;
    }
    printf("%lld",s);
}

