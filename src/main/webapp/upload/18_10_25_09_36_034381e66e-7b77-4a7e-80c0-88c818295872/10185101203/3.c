#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long all=1.0;
    unsigned int count;
    unsigned int i=1;
    scanf("%d",&count);
    for(;i<=count;++i)
    {
        all=all*i;
    }

    printf("%lld",all);
    return 0;
}
