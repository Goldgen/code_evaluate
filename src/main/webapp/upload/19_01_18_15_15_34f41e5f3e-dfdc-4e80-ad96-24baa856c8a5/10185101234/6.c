#include<stdio.h>
int main()
{
    int a,b,m;
    scanf("%d %d",&a,&b);
    for(int i=1;(i<=a)&&(i<=b);++i)
        if((a%i==0)&&(b%i==0))
        m=i;
    printf("最大公约数是: %d",m);
    return 0;
}