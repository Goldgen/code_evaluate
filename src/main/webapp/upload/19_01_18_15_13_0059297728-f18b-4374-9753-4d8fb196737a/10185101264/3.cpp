#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdint.h>
int main()
{
    unsigned long x,p,n,i,j;
    unsigned long o,t=0,m=0,a=0;
    unsigned long max,min;

    scanf("%lu %lu %lu",&x,&p,&n);
    max=x>>(p+1);
    for(i=0;i<=p;i++)
        t=t+pow(2,i);
    for(j=0;j<=(p-n);j++)
        m=m+pow(2,j);
    for(o=0;o<=(n-1);o++)
        a=a+pow(2,o);

    min=x&m;

    x=x&t;
    x=x>>(p-n+1);
    x=~x;
    x=x&a;
    x=x<<(p-n+1);
    x=x+max+min;

    printf("%lu",x);

    return 0;
}