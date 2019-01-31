#include<stdio.h>
int main()
{
    long long int n,i,answer=1;
    scanf("%lld",&n);
    for(i=1;i<=n;++i){
        answer*=i;
    }
    printf("%lld",answer);
    return 0;
}