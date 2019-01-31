#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c=0,d=0;
    for(a=1;a<=99;a=a+2)
    {
        c=c+a;
    }
    for(b=2;b<=100;b=b+2)
    {
        d=d+b;
    }
    printf("%d %d",c,d);
    return 0;
}
