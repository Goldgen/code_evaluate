#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e = (a>b)?a:b;
    f = (e>c)?e:c;
    max = (f>d)?f:d;
    printf("%d",max);
    return 0;
}