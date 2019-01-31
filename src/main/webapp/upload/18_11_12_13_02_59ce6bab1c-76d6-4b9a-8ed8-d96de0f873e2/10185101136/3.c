#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x);

int main()
{
    int n;
    scanf("%d", &n);
    if (isPrime(n))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}

bool isPrime(int x)
{
    bool flag = true;
    for (int i = 2; i <=round(sqrt(x)); ++i)
        if (x % i == 0){
            flag = false;
            break;
        }
    return flag;
}
