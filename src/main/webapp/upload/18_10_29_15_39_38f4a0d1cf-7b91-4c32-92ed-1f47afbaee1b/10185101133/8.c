#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n,num=0;
    int m=0;
    int temp,p=0;
    scanf("%lld %d",&n,&m);
    num=n;
    while(n)
    {
        n/=10;
        p++;
    }
    m=m%p;
    while(m>0){
        temp=num%10;
        num/=10;
        num=num+temp*pow(10,p-1);
        m--;
    }
    printf("%d %lld",p,num);
    return 0;
}