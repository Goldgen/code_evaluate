#include <stdio.h>
#include <stdlib.h>
int main()
{
    long n,m;
    int i;
    long long sum=1;
    scanf("%ld",&n);
    for(i=1;i<=n;++i)
        sum=sum*i;
    m=sum%20181111;
    printf("%ld",m);
    return 0;
}