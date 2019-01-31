#include <stdio.h>
#include <stdlib.h>

unsigned long long fibonacci(unsigned long long n);

int main()
{
    unsigned long long num = 0;
    scanf("%llu", &num);
//    for(num = 1; num < 20; num++)
    printf("%llu\n", fibonacci(num));
    return 0;
}

unsigned long long fibonacci(unsigned long long n){
    if(n == 1 || n == 2){
        return (unsigned long long)1;
    }else if(n == 0){
        return 0;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}
