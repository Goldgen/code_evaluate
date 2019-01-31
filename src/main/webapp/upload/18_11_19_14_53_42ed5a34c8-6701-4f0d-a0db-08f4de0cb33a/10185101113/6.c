#include <stdio.h>
int fibonacci(int);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fibonacci(a));
    return 0;
}
int fibonacci(int n)
{
    if (n==0)
        return;
    else if (n==1||n==2)
        return 1;
        return fibonacci(n-1)+fibonacci(n-2);
}
