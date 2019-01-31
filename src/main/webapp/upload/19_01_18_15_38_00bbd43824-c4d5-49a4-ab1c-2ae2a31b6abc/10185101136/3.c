#include <stdio.h>

int main()
{
    unsigned int x, a;
    int p, n;
    scanf("%u%d%d", &x, &p, &n);
    a = ~(~0ll << n) << (p + 1 - n);
    printf("%u", x ^ a);
    return 0;
}
