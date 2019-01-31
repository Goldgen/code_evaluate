#include <stdio.h>

int main()
{
    long long  n=1LL;
    long long i=1LL;
    scanf("%lld",&n);
    if(n>0)
    {
    for(i=n-1;i>0;i--)
        n=n*i;
    printf("%lld",n%20181111);
    }
    else if(n==0)
        printf("20181111");
    return 0;
}
