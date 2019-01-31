#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long sum=1;
    scanf("%d",&n);
    while(n>=1&&n<20)
    {
        sum*=n;
        n--;
    }
    printf("%lld",sum);
    return 0;
}