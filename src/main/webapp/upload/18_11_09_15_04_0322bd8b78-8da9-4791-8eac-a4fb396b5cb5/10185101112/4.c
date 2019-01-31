#include <stdio.h>

int main()
{
    int n;
    long long sum=1,sum1;
    scanf("%d",&n);
    if (n==0)
        printf("%d",20181111%1);
    else
    {
    long long i=1;
    for (;i<=n;i++)
    {
        sum=(long long)i*(long long)sum;
    }
    sum1=(long long)sum%(long long)20181111;
    printf("%lld",sum1);
    }
}
