#include <stdio.h>
#include <math.h>

unsigned long long OctToDec(unsigned long long n);

int main()
{
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", OctToDec(n));
    return 0;
}

unsigned long long OctToDec(unsigned  long long n)
{
    unsigned long long sum = 0;
    unsigned long long cnt = 0;
    while(n > 0)
    {
        sum += pow(8, cnt) * (n % 10);
        n /= 10;
        cnt++;
    }
    return sum;
}