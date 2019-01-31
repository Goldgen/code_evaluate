#include <stdio.h>
#include <stdlib.h>

int Fibo(int a)
{
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    return Fibo(a-1) + Fibo(a-2);
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    printf("%d",Fibo(n));
    return 0;
}
