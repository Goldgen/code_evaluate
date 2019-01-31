#include <stdio.h>

void DecToBinary(int);

int main()
{
    int n;
    scanf("%d", &n);
    DecToBinary(n);
    return 0;
}

void DecToBinary(int x)
{
    if (x == 0)
        return;
    DecToBinary(x / 2);
    printf("%d", x % 2);
}
