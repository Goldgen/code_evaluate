#include<stdio.h>

long long fibonacci(int a);

int main(){
    int n=0;
    scanf("%d",&n);
    printf("%lld",fibonacci(n));
    return 0;
}

long long fibonacci(int a){
    if((a==1)||(a==2))
        return 1;

   
        return fibonacci(a-1)+fibonacci(a-2);

    
}