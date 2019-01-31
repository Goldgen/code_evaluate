#include <stdio.h>

int main()
{
    int n=1;
    long long N=1;
    scanf("%d",&n);
    for (;n>0;--n)
    {
         N=(long long)N*n;
    }
    printf("%lld",N);
    return 0;
}