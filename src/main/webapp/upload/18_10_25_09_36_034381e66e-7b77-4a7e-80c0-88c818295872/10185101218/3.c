#include<stdio.h>
int main(void)
{
    long long a,i;
    int n;
    i=1;
    a=1;
    scanf("%d",&n);
    while(i<=n)
    {
        a*=i;
        i++;
    }
    printf("%lld",a);
    return 0;
}
