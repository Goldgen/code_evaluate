#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
        if(c>d)
        {
            if(a>c)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",c);
            }
        }
        else
        {
            if(a>d)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",d);
            }
        }
    }
    else
    {
        if(c>d)
        {
            if(b>c)
            {
                printf("%d",b);
            }
            else
            {
                printf("%d",c);
            }
        }
        else
        {
            if(b>d)
            {
                printf("%d",b);
            }
            else
            {
                printf("%d",d);
            }
        }
    }
    return 0;
}
