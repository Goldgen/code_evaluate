#include <stdio.h>

int Fibonacci(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", Fibonacci(n));
    return 0;
}

int Fibonacci(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    return Fibonacci(x - 2) + Fibonacci(x - 1);
}
