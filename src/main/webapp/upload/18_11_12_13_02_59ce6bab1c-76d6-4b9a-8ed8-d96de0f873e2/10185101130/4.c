#include<stdio.h>

void Decimal(long long n)
{
    long long d = 0;
    int s = 8;
    long long b1 = 1,b = n;
    for(int i = 1; b > 0; i++)
    {
        b1 = b % 10;
        b /= 10;
        for(int j = 1; j < i; j++)
        {
            b1 *= s;
        }
        d += b1;
    }
    printf("%lld",d);
}

int main(void)
{
    long long D;
    scanf("%lld",&D);
    Decimal(D);
    return 0;
}
