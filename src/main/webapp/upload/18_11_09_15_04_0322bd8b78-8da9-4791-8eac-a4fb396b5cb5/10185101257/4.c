#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long a,b=1;
    scanf("%lld",&a);
    if(a==0)
        b==1;
    else
        {
            for(int i=1;i<=a;++i)
            b=(b*i)%20181111;
        }
    printf("%lld",b);
    return 0;
}
