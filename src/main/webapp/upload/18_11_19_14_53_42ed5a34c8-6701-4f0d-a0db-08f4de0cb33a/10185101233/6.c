#include<stdio.h>
long long fibonacci(int x)
{
    if(x==1||x==2)
        return 1;
    else if(x>2)
        return fibonacci(x-1)+fibonacci(x-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",fibonacci(n));
    return 0;
}
