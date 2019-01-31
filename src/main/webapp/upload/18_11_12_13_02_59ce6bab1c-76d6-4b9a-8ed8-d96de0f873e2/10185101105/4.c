#include <stdio.h>

int main()
{
    int a,i=0,x=1,j,b;
	long long int s=0ll,n;
    scanf("%lld",&n);
    a=n%10;
    for(a=n%10,b=n/10;b>0;a=b%10,b/=10)
    {
        x=1;
        for(j=1;j<=i;j++)
            x*=8;
        s+=a*x;
        i++;
    }
    x=1;
    for(j=1;j<=i;j++)
            x*=8;
        s+=a*x;
    printf("%lld",s);
    return 0;
}
