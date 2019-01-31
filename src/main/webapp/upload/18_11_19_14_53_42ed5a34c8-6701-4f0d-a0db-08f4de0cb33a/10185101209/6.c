#include<stdio.h>

unsigned long long Func(unsigned long long, unsigned long long, unsigned long long);
unsigned long long max(unsigned long long, unsigned long long);

long long main()
{
    unsigned long long n=0;

    scanf("%llu",&n);
    printf("%llu",Func(1,1,n));
    return 0;
}

unsigned long long Func(unsigned long long a, unsigned long long b, unsigned long long n)
{
    static unsigned long long count=2;

    if(n==count||n==1)
        return max(a,b);
    count++;
    if(a>b)
        return Func(a, a+b, n);
    return Func(a+b, b, n);
}

unsigned long long max(unsigned long long a, unsigned long long b)
{
    if(a>b)
        return a;
    return b;
}
