#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n>=2)
        return fibonacci(n-1)+fibonacci(n-2);
    if(n<=0)
        return 0;
        return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
}
