#include<stdio.h>
#include<limits.h>
int main(void)
{
    unsigned int x,p,n,a,b,c;

    scanf("%u%u%u",&x,&p,&n);
    if(n==0)
    {
        b=x>>(p+1);
        c=((~(0<<(32-p)))>>p)&b;
    }
    else
    {
        a=p-n+1;
        b=x>>a;
        c=((~(0<<(32-p)))>>p)&b;
    }
    printf("%u",c);
    return 0;
}
