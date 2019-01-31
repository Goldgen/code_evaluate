#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n;
    long long i=1;
    scanf("%d",&x);
    for(n=1;n<=x;n++)
    {
        i=i*n;
    }
    printf("%lld",i);
    return 0;
}
