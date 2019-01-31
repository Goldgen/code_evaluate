#include<stdio.h>
int main(void)
{   unsigned long long n=1LL;
    int a=1,b=1;
    scanf("%d",&b);
    for(;a<=b;++a)
    n=n*a;
    printf("%llu",n);
    return 0;
}
