#include <stdio.h>
#include <math.h>

unsigned int oct_dec(long long x);

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%u", oct_dec(n));
    return 0;
}

unsigned int oct_dec(long long x)
{
    int num = 0;
    unsigned int ans = 0;
    while (x > 0){
        ans += (x % 10) * pow(8, num);
        num++;
        x /= 10;
    }
    return ans;
}
