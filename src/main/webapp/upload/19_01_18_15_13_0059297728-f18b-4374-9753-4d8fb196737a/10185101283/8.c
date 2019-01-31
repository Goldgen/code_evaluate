#include<stdio.h>
int main()
{
    int a,b,c,d,e,max,min;
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    d=(max>c)?c:max;
    if(c>min)
        e=d;
    else
        e=min;
    printf("%d",e);
    return 0;

}
