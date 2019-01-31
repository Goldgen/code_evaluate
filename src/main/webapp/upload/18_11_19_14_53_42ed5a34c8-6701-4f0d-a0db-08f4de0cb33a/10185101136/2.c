#include <stdio.h>

int sum(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}

int sum(int x)
{
    if (x < 10)
        return x;
    return x % 10 + sum(x / 10);
}
