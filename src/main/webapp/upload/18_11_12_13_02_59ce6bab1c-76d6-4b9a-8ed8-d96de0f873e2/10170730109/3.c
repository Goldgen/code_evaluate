#include <stdio.h>
#include <math.h>

int IsPrime(int n);
int main(void) {
    int n;
    scanf("%d",&n);
    if(IsPrime(n)) printf("It is a prime number.");
    else printf("It's not a prime number.");
    return 0;
}

int IsPrime(int n){
    int i=2;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
};
