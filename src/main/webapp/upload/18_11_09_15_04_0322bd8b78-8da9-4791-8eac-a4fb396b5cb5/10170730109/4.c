#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x = 1LL;
    long int n = 0L;
    scanf("%ld",&n);
    for(;n>0;n--){
        x=x*n;
    }
    printf("%lld",x%20181111LL);
    return 0;
}
