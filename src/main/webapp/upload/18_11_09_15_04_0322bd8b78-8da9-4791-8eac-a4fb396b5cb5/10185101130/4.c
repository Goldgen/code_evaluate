#include<stdio.h>

int main(void)
{
    int n,i;
    unsigned long long a = 1,b;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
        a *=(unsigned long long) i;
    b = a % 20181111;
    printf("%llu",b);
    return 0;

}
