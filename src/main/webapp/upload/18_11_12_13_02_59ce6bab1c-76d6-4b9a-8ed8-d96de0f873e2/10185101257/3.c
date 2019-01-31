#include<stdio.h>
void prime(int n){
    if(n==1){
        printf("It's not a prime number.");
        return 0;
    }
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            printf("It's not a prime number.");
            return 0;
        }
    }
    printf("It is a prime number.");
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}
