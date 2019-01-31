#include<stdio.h>
#include<limits.h>
int main(void)
{
    unsigned int x,p,n,m,a,b,c,d;
    m=UINT_MAX;
    scanf("%u%u%u",&x,&p,&n);
    a=p-n+1;
    b=x>>a;
    c=(m>>(32-p))&b;
    d=x-(c<<a);
    printf("%u",d);
    return 0;
}
