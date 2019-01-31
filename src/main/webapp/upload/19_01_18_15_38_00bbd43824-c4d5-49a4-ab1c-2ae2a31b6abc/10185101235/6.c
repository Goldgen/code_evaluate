#include <stdio.h>

main()
{
    int a,b,c = 0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    {
        b = a;
    }
    else
    {
        a = b;
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