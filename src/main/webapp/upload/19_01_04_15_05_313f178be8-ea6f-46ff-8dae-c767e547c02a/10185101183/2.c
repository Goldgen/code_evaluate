#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,e; char c,d; long long n;long long i;
    scanf("%lld %c %lld %c %lld",&a,&c,&b,&d,&e);
    if((e-b)%a==0)
    {
        n=(e-b)/a;
        for(i=0;n!=0;++i)
            n=n/10;
        printf("%lld",i-1);
    }
    else
    {
        n=(e-a)/b;
        for(i=0;n!=0;++i)
            n=n/10;
        printf("-%lld",i-1);
    }

}
