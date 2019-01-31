#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int n,m,sum;
    scanf("%ld %ld",&n,&m);
    long int a=1,p=0;
    while(n/a!=0)
        {a*=10;
         ++p;}
    long int x,y;
    while(m>p)
        m=m-p;
    if(m==p)
       sum=n;
    else
    {long int b=1,c=1;
     for(int i=0;i<m;++i)
        b*=10;
     for(int i=0;i<p-m;++i)
        c*=10;
     x=(n%b)*c;
     y=(n/b);
     sum=x+y;}
    printf("%ld %ld",p,sum);
    return 0;
}
