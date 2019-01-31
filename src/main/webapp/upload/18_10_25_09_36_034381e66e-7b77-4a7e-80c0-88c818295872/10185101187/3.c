#include <stdio.h>

int main()
{
    int n, time;
    long num;
    scanf("%d", &n);

    for(num = 1LL, time = 1; time <= n; time++)
        num = num * time;

    printf("%ld", num);
}
