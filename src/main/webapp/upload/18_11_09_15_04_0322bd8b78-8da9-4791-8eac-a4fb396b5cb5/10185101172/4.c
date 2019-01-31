#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,sum=1LL;
    scanf("%lld",&n);
    for(;n>0;n--)
       sum*=n;
    printf("%lld",sum%20181111);
	
    return 0;
}
