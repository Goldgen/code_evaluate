#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int Count(long long n) {
    int count = 0;
    for (; n != 0; count++, n /= 10);
    return count;
}

int main() {
    long long m, n, count, bit = 0, i;
    scanf("%lld %lld", &n, &m);
    count = Count(n);
    for (i = 0; i < m; i++) {
        bit = n % 10;
        n /= 10;
        n += bit * (int) pow(10, count - 1);
    }
    printf("%lld %lld", count, n);
    return 0;
}