#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,p,n,a,b,c,d,e;
    scanf("%lld %lld %lld",&x,&p,&n);
    a = x/( long long int)pow(2.0,(double)(p+1-n));
    b = a/(long long int)pow(2.0,(double)n);
    c = a - b*(long long int)pow((double)2,(double)n);
    d = pow(2.0,(double)n)-c-1;
    e = x + (d - c)*pow(2.0,(double)(p+1-n));

    printf("%lld",e);
    return 0;

}
