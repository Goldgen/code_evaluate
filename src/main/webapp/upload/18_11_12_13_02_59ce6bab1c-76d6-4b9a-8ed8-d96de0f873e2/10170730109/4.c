#include <stdio.h>
#include <math.h>
long long transfer(long long octal);
int main(void) {
    long long int octal;
    scanf("%lld",&octal);
    printf("%d",transfer(octal));
    return 0;
}
long long transfer(long long octal){
    long long i=0,decimal=0,right=0;
    for(;octal>0;octal=octal/10){
        right=pow(8,i++)*(octal%10);
        decimal+=right;
    }
    return decimal;
}
