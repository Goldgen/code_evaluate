#include<stdio.h>
int main()
{
    unsigned long long x = 1;
    int a;
    scanf("%d",&a);
    for(int n =1;n<=a;++n)
        x = x*n;
    printf("%llu",x);
    return 0;
}