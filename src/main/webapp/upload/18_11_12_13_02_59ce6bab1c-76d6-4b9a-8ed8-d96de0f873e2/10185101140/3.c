#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primeNumber(int a);
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1) return 0;
    if(primeNumber(n)) printf("It is a prime number.");
    else printf("It's not a prime number.");
    return 0;
}
int primeNumber(int a){
    int i;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}
