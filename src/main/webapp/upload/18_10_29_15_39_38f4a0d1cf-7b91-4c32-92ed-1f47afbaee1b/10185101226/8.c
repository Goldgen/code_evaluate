#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,b,c,d;
    int n;
    scanf("%d%d",&n,&a);
    c=0;i=1;d=n;
    for(;n>=1;n/=10)
        ++c;
    n=d;
    while(a>=c)
        {
        a=a-c;
        }
    while(i<=a)
    {
        b=n%10;
        n=n/10;
        n=n+pow(10,c-1)*b;
        ++i;
    }
    printf("%d %d",c,n);
    return 0;
}