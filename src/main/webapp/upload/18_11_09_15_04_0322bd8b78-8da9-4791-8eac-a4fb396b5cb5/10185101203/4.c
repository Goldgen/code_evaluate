#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long long all=1.0,a;
    unsigned int count;
    unsigned int i=1;
    scanf("%d",&count);
    for(;i<=count;++i)
    {
        all=all*i;
    }
    a=all%20181111;
    printf("%u",a);
    return 0;
}
