#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime(long long n){
    long long i;
    int flag = 0;
    if (n == 1 || (n%2 == 0 && n != 2))
        return false;
    else
        for (i = 3;i <= sqrt(n);i += 2){
            if (n%i == 0)
                flag = 1;
        }
    
    if (flag == 1)
        return false;
    return true;
}

int main(void)
{
    long long n;
    while (scanf("%lld",&n) != EOF)
    if (prime(n) == true)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}