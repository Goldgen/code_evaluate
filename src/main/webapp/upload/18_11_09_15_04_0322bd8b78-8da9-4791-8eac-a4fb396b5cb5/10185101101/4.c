#include <stdio.h>
#include <stdlib.h>
int main()
{


    unsigned long long k,n=0;int i;
    scanf("%llu",&k);

    n=1;
    for(i=1;i<=k;++i)
    {
        n=n*i;
    }
    printf("%llu",n%20181111);
    return 0;
}