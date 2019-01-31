#include <stdio.h>

main()
{
    int a,b,c,d = 0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=b)
    {
        b = a;
    }
    else
    {
        a = b;
    }
    if(c>=d)
    {
        d = c;
    }
    else
    {
        c = d;
    }
    if(c>=a)
    {
        a = c;
    }
    else
    {
        c = a;
    }
    printf("%d",a);
}