#include<stdio.h>
#include<limits.h>
int main()
{
    unsigned int a;
    unsigned long long b;
    a=INT_MAX;
    a=a*2+1;
    b=LONG_LONG_MAX;
    b=b*2+1;
    printf("%u\n%llu",a,b);
    return 0;
}