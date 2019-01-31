#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int num);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Fibonacci(n));
    return 0;
}

int Fibonacci(int num)
{
    if(num == 1 || num == 2)
        return 1;
    else if(num == 0)
        return 0;
    else
        return Fibonacci(num-1)+Fibonacci(num-2);
}
