#include <stdio.h>
int main()
{
    int a,b,c,d,m,n,i,j,x,y;
    scanf("%d %d",&n,&m);
    for(a=0,x=n;x>=1;x=x/10)
    {
        a++;
    }
    printf("%d ",a);
    b=m%a;
    for(i=0,c=1;i<b;i++)
    {
        c=c*10;
    }
    for(j=0,d=1;j<a-b;j++)
    {
        d=d*10;
    }
    y=(n-n/c*c)*d+n/c;
    printf("%d",y);
    return 0;
}
