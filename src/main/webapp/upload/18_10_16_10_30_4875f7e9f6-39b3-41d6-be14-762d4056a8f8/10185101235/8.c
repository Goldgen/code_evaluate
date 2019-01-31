#include <stdio.h>

main()
{
    int a,b,c,d = 0;
    scanf("%d %d %d",&a,&b,&c);
    if(b<=c)
    {
        d=b;b=c;c=d;
    }
    if(a<=b)
    {
        d=a;a=b;b=d;
    }
    if(b<=c)
    {
        d=b;b=c;c=d;
    }
    printf("%d",b);
}
