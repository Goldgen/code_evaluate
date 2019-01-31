#include<stdio.h>

int main()
{
    unsigned long long n,num=1,i=1;

    scanf("%llu",&n);
    for(i = 1;i <= n;i++)
        num *= i;
    if(n == 0)
        num = 1;
    printf("%llu",num%20181111);
    return 0;
}