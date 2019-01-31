#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m,n,p,q;
    scanf("%d %d %d %d",&m,&n,&p,&q);
    if(n>m)
        m=n;
    if(q>p)
        p=q;
    if(p>m)
        m=p;
    printf("%d",m);
    return 0;
}


