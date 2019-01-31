#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b)
        b=a;
    if (b>c)
        c=b;
    if (c>d)
        d=c;
    printf("%d",d);
    return 0;
}
