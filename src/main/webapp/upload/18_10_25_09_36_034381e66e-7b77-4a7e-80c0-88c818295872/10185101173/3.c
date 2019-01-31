#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a<=20;
    int d=1;
    unsigned long long b=1;
    scanf("%d",&a);
    for(int count = 1;count<=a;++count)
    {
        b=b*d;
        ++d;
    }
    printf("%llu",b);
    return 0;

}
