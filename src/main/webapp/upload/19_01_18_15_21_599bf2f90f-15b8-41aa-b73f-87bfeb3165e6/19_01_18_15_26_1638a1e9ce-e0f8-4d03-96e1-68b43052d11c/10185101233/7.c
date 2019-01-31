#include <stdio.h>
 main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b) a=b;
    if(a<c) a=c;
    if(a<d) a=d;
    printf("%d",a);
    return 0;
 }