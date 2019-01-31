#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    unsigned x,p,n;
    scanf("%u %u %u",&x,&p,&n);
    unsigned a=1;
    if(0==n)
    {
        a<<=p+1;
        a-=1;
        x>>=p;
    }
    else
    {
        if (n==32){
            a=UINT_MAX;
        }
        else{
        a<<=n;
        a-=1;}
        x>>=p-n+1;
    }
    x&=a;
    printf("%u",x);
    return 0;
}
