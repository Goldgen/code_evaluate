#include <stdio.h>

int main (void)

{
    int n = 1;
    int i = 1;
    scanf("%d",&n);
    long long s = 1;
    for (i = 1 ; i <= n ;i++)
    {
        s *= i;
    }
    printf("%lld",s);
}
