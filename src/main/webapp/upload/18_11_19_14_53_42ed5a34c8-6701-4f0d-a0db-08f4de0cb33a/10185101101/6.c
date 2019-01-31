#include <stdio.h>
#include <stdlib.h>
long long fibo[10000];
long long fibonacci(int n){
    fibo[0]=1;fibo[1]=1;
    fibo[n+2]=fibo[n+1]+fibo[n];
    if(n<9998)
        return fibonacci(n+1);

}

int main()
{
    int i;
     fibonacci(0);
    scanf("%d",&i);

    printf("%lld",fibo[i-1]);
    return 0;
}

