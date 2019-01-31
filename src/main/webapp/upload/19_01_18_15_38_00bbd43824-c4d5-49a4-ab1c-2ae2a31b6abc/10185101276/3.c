#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int x,p,n,d,e;
    scanf("%lld %lld %lld",&x,&p,&n);
    d=x;
    x>>=p-n+1;
    for(e=0;e<n;e++)
    {
        if(x%2==1){x>>=1;
        d=d-pow(2,p-n+1+e);}
        else {x>>=1;
        d=d+pow(2,p-n+1+e);}
    }
    printf("%lld",d);
    return 0;
}
