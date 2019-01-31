#include <stdio.h>

int main()
{
    unsigned int x;
    int p, n;
    scanf("%u%d%d", &x, &p, &n);
    printf("%u", (x >> (p + 1 - n)) & ~(~0ll << n));
    return 0;
}
