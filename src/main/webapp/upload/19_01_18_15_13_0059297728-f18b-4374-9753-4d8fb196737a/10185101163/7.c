#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b) max=a;
    else max=b;
    if(max<c) max=c;
    if(max<d) max=d;
    printf("%d",max);
    return 0;
}