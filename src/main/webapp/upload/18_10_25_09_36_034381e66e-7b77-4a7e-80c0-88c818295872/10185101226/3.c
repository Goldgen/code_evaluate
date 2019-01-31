#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a=1LL;
    int n;
    int c;
    scanf("%d",&c);
    for(n=1;n<=c;++n)
       {
        a=(long long)a*n;
       }
        printf("%lld",a);
    return 0;
}
