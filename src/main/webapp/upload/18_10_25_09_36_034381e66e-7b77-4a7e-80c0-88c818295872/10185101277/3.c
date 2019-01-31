#include <stdio.h>
int main(void)
{
    int i=0,n;
    long long m=1;
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        m*=i;
    }
    printf("%lld",m);
    return 0;
}
