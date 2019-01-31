#include <stdio.h>
int fibo(int a);
int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d\n",fibo(a));
    return 0;
}
int fibo(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return fibo(a-1)+fibo(a-2);
    }
}