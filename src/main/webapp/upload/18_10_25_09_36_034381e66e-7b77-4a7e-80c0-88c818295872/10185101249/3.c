#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n;
    long long s=1LL;
    scanf("%d",&n);
    if (n<=20)
    {
    for(a=1;a<=n;a++)
    {
        s*=a;
    }
    printf("%lld",s);
    }

    return 0;
}