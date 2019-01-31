#include<stdio.h>
int main()
{
    unsigned int x,p,n;
    scanf("%u %u %u",&x,&p,&n);
    x >>= p - n + 1;
    printf("%u",x);
    return 0;
}
