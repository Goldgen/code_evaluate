#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    unsigned long long b=1,c=1;
    scanf("%d",&a);
    int i=1;
    for(;i<=a;++i)
    {
        b=b*i;
    }
    c=b%20181111;
    printf("%llu",c);
    return 0;
}
