#include <stdio.h>
int main()
{
    long long int n,m,b;
    int i=0,e=0,c=0;
    scanf("%lld %lld",&n,&m);
    b=n;
    while(n!=0)
    {
        n=n/10;
        i+=1;
    }
    printf("%d ",i);
    n=b;
    c=i;
    for (i=1;i<=m;i++)
    {
        b=n%10;
        for(e=1;e<c;e++)b*=10;
        n=n/10;
        n=n+b;
    }
    printf("%lld",n);
    return 0;
}
