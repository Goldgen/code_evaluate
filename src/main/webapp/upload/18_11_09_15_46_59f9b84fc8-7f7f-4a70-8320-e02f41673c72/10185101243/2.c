#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,a,b,i,t,c;
    t=0;
    i=1;
    for(a=2.0,b=1.0;i<=50;i++)
       {

       n=a/b;
       c=a;
       a=a+b;
       b=c;
        t=t+n;
       }
    printf("%.2f",t);
    return 0;
}
