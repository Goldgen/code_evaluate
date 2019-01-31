#include<stdio.h>
int main()
{
    int x=1,i=1;
    unsigned long long y=1;
    for(;i<=10;i++)
    {
        x*=i;
    }
    for(i=1;i<=20;i++)
    {
        y*=i;
    }
    printf("%d\n%lld",x,y);
    return 0;
}