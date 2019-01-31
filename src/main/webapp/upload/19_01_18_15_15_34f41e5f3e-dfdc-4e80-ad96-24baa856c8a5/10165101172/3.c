#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime(int n){
    int i;
    if (n == 2 || n == 5 || n == 7 || n == 3)
        return true;
    for (i = 3;i <= sqrt(n);i += 2){
        if (n%i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n;
    int i;
    scanf("%d",&n);
    printf("%d",n);
    for (i = 3;i <= n/2;i += 2){
        if (prime(i) == true && prime(n - i) == true)
            printf("=%d+%d",i,n - i);
    }
    return 0;
}
