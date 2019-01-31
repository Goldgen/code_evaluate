#include <stdio.h>
long long change(long long  n){
    long long ans=0,di=1;
    while(n){
        ans+=n%10*di;
        di*=8;
        n/=10;
    }
    return ans;
}
int main()
{
    long long n;
    scanf("%lld",&n);
    printf("%lld",change(n));
    return 0;
}
