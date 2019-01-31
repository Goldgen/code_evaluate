#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long sum=1;
    long long a;
    scanf("%d",&n);
    if(n==0)
    {
        printf("20181111");
    }
    else
    {
        for(i=1;i<=n;++i)
        {
            sum*=i;
        }
        a=(long long)sum%20181111LL;
        printf("%lld",a);
    }
    return 0;
}
