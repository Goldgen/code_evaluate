#include <stdio.h>

int main()
{
    int n, i;
    long long ans = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i){
        ans *= i;
        ans %= 20181111;
    }
    printf("%lld", ans);
    return 0;
}
