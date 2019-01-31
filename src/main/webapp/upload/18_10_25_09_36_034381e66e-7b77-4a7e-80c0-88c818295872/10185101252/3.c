#include <stdio.h>

int n;
unsigned long long int result = 1;
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    printf("%llu", result);
}
