#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int x,p,n,d,e;
    d=0;
    scanf("%lld %lld %lld",&x,&p,&n);
    x>>=p-n+1;
    for (e=0;e<n;e++){
        if(x%2==0){x>>=1;
        d=d;}
        else{ x>>=1;
        d=d+pow(2,e);}

    }
    printf("%lld",d);
    return 0;
}
