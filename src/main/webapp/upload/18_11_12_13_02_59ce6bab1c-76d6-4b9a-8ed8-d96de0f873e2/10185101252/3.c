#include <stdio.h>
#include <ctype.h>
#include <math.h>

int func(int num){

    if(num <= 1)
        return 0;
    int maxn = sqrt(num) + 1;
    for(long long i = 2; i < maxn; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char* argv[]){
/*
    for(int i = 1; i <= 100; i++)
        printf("%d %d\n",num, func(num));
        */
    int a;
    scanf("%d", &a);
    if(func(a))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");

    return 0;
}
