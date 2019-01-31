#include <stdio.h>

long long Factorial(int n){
    return n == 0?1:(long long)n*Factorial(n - 1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%lld",Factorial(n));
    return 0;
}
