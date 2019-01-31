#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d",&n);
    int prime[n];

    for(int i = 3; i < n; i++){
        prime[i] = 1;
    }
    for(int i = 2; i < n/2; i++){
        for(int j = 2; i*j < n; j++){
            prime[i*j] = 0;
        }
    }

    printf("%d",n);
    for(a = 3; a <= n/2; a += 2){
        b = n - a;
        if(prime[a] && prime[b]){
            printf("=%d+%d",a,b);
        }
    }

    return 0;
}
