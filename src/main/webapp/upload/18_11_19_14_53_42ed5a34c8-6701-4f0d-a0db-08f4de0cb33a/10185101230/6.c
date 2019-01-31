#include<stdio.h>
#include<stdlib.h>
long long fibonacci(int n){  /*fibonacci: recursive version*/
    if (n<3) return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
int i;
scanf("%d",&i);
printf("%lld",fibonacci(i));
}
