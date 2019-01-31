#include <stdio.h>

int main()
{
    int n,m,a,b,c,i;
    int count=0;
    scanf("%d %d",&n,&m);
    a=n;
    while(a!=0){
        count++;
        a=a/10;
    }
    m=m%count;
    a=1;
    for(i=0;i<count-m;i++)
        a*=10;
    c=1;
    for(i=0;i<m;i++)
        c*=10;
    b=n%c*a;
    n=b+n/c;
    printf("%d %d",count,n);
    return 0;
}