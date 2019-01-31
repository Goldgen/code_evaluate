#include <stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
        x=a;
    else
        x=b;
    if(x>c)
        y=x;
    else
        y=c;
    if(y>d)
        printf("%d",y);
    else
        printf("%d",d);
    return 0;
}