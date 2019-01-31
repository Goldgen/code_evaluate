#include<stdio.h>
long long  fib(int n){
    if(n==1||n==2)
        return 1;
    else if(n>2)
        return fib(n-1)+fib(n-2);
    else 
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",fib(n));
}