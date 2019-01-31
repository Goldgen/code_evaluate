#include <stdio.h>
int main()
{
    long long  n,m=1;
    scanf("%lld",&n);
    if(n==0)
        n==1;
    for(int i=1;i<=n;i++){
        m*=i;
        m=m%20181111;
    }

    printf("%lld",m);
}
