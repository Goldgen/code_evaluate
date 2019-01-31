#include<stdio.h>
int fibonacci(int);
int fibonacci(int n)
{
    if(0==n)return 0;
    else if(1==n)return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=fibonacci(n);
    printf("%d",x);
    return 0;
}