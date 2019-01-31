#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long int p=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p=i*p;
    printf("%lld",p);
    return 0;
}
