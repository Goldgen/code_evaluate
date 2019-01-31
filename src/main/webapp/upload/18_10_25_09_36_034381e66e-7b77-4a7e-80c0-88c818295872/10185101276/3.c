#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int a=1;
    int i=1,n=0;
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        a*=i;
    }
    printf("%lld",a);
    return 0;
}
