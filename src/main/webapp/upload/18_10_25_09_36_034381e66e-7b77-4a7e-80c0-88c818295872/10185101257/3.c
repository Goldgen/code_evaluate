#include <stdio.h>
int main()
{
    long long sum=1;
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        sum*=i;
    printf("%lld",sum);
    return 0;
}
