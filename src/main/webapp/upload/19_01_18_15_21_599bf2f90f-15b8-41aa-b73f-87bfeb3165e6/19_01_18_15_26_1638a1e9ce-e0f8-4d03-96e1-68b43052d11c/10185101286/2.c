#include<stdio.h>
int main()
{
    unsigned long long int x,p,n;
    scanf("%llu %llu %llu",&x,&p,&n);
    x=x>>(p-n+1)&~(~0ull<<n);
    printf("%llu",x);
    return 0;
}