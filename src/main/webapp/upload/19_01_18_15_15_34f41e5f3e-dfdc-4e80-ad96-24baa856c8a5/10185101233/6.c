#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("最大公约数是: %d",a);
    if(a>b)
    {
        while(n!= 0)
        {
        n = a % b;
        a = b;
        b = n;
        }
        printf("最大公约数是: %d",a);
    }
    if(a<b)
    {
        while(n!= 0)
        {
        n = b % a;
        b = a;
        a = n;
        }
        printf("最大公约数是: %d",b);
    }
    return 0;
}
