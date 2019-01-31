#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int a;
    unsigned long long b;

    a=pow(2,32)-1;
    b=pow(2,64)-1;

    printf("%u\n%llu",a,b);

    return 0;
}