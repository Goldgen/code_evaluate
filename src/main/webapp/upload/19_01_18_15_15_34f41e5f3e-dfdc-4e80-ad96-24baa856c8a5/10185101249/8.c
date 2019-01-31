#include <stdio.h>
#include <math.h>
int main()
{
    long long a,c,m,p;
    int n,b;
    scanf("%lld %d",&a,&b);
    n=1;
    p=a;
    while(a/10!=0)
        {
            n++;
            a/=10;
         }
    printf("%d ",n);
    if(b%n!=0)
    {
        if(b>n)
            b=b%n;
            m=p/pow(10,b);
            c=p-m*pow(10,b);
            printf("%lld%lld",c,m);
    }
    else
        printf("%lld",p);
    return 0;
}
