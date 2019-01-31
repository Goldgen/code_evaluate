#include <stdio.h>
#include <stdbool.h>
#include <math.h>

long long eight(long long n){
    long long i = 0;
    long long sum = 0;
    while (n != 0){
        sum += (n%10)*pow(8,i);
        n /= 10;
        i++;
    }
    return sum;
}

int main(void){
    long long n;
    scanf("%lld",&n);
    printf("%lld",eight(n));
}
