#include<stdio.h>
int main()
{
    int x,i=1;
    unsigned long long y=1;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        y*=i;
    printf("%llu",y);
    return 0;
}