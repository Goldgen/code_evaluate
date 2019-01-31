#include <stdio.h>
#include <math.h>


int main()
{
    long long n;
    scanf("%lld",&n);
    long long a=1;
    for (int i=1;i<n+1;i++){
        a*=i;
    }
    printf("%lld",a);
    return 0;
}
