#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int i = 1;
    long long number = 1;
    while (i<=n){
            number *= i;
            i++;
    }
    printf("%lld",number);
    return 0;
}