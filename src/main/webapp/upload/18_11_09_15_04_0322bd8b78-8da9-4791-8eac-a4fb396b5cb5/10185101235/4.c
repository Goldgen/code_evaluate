#include <stdio.h>

int main (void)

{
    int n = 0;
    int i = 1;
    int mod = 1;
    long long int s = 1;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s *= i;
        mod = s%20181111;
        s = mod;
    }
    printf("%d",mod);
}
