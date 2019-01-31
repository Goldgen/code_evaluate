#include <stdio.h>
int gcd(int m,int n);
int main(void)
{

    int m,n,t;
    scanf("%d %d",&m,&n);
    if(m>n)
    {
        t=m;
        m=n;
        n=t;
    }
    n=gcd(m,n);
    printf("%d",n);
    return 0;
}
int gcd(int m,int n)
{

    int r;
    r=m%n;
    if(r==0)
        {return n;}
    else
    {
        gcd(n,r);
    }
}
