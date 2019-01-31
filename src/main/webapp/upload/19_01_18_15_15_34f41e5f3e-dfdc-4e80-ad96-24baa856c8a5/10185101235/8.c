#include <stdio.h>
#include <math.h>

int main (void)

{
    long long n = 0;
    int m = 0;
    int dig = 0;
    int i = 1;
    int t = 1;
    long long mod = 0;

    scanf("%d %d",&n,&m);
    int a = n;
    while(a!=0)
    {
        a /= 10;
        dig++;
    }
    m = m % dig;
    for(;i<=m;i++)
    {
        mod = n%10;
        n /= 10;
        for(t=1;t<=dig-1;t++)
            mod*=10;
        n += mod;
    }

    printf("%d %ld",dig,n);
}
