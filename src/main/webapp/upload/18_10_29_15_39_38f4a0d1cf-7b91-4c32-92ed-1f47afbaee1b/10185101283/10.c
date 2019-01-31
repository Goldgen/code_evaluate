#include<stdio.h>
int main()
{
    int n,m;
    int i=0;
    int a,b;
    int w=1,c=1,d=1;
    scanf("%d %d",&n,&m);
    int e=n;
    for(;e!=0;++i)
        e=e/10;
    printf("%d ",i);
    if(m<=i)
        m=m;
    else
        m=m%i;
    for(int p=1;p<=m;++p)
    {
        c=c*10;
    }
    a=n%c;
    b=(n-a)/c;
    for(int q=1;q<=(i-m);++q)
    {
        d=d*10;
    }
    w=a*d+b;
    printf("%d",w);
    return 0;
}