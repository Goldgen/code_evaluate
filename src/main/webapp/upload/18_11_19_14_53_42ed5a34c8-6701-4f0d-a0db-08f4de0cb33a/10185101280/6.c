#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
printf("%d",fibonacci(n));
return 0;
}

int fibonacci(int n)
{
    if(n<2)
        return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}