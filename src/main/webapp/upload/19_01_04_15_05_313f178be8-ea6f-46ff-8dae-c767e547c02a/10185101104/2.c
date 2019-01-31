#include <stdio.h>

int move(long long int a,long long int b,long long int c)
{
    int n=-1;
    long long int d=(c-b)/a;
    while(d>0)
    {
        n++;
        d=d/10;
    }
    return n;
}
int test(long long int a,long long int b,long long int c)
{
    long long int ten=a,d=c-b;
    int i;
    for(i=0;i<10;i++)
    {
        if(d==ten)
            return 1;
        ten*=10;
    }
    return 0;
}

int main()
{
    long long int a,b,c;
    scanf("%lld+%lld=%lld",&a,&b,&c);
    if(test(a,b,c)==1)
        printf("%d",move(a,b,c));
    else
        printf("-%d",move(b,a,c));
    return 0;
}
