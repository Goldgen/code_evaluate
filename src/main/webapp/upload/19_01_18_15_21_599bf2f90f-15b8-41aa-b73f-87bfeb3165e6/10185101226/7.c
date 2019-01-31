#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b)a=b;
    if(a<c)a=c;
    if(a<d)a=d;
    printf("%d",a);
    return 0;
}
