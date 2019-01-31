#include <stdio.h>

int main()
{
    long long a = 1, b = 1;
    int i;

    for (i = 1; i <= 10; ++i)
        a *= i;
    printf("%lld\n", a);
    for (i = 1; i <= 20; ++i)
        b *= i;
    printf("%lld", b);

    return 0;
}
