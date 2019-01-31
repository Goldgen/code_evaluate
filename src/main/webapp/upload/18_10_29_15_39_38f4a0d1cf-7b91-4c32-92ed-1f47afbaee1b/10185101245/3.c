#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    printf("%d",a);
    for(b=3;b<=a/2;b+=2)
    {
        d=a-b;
        for(c=2;c<=sqrt(b);c++)
        { if(b%c==0)
            break;

        }
        for(e=2;e<=sqrt(d);e++)
        { if(d%e==0)
            break;

        }
         if(c>sqrt(b)&&e>sqrt(d))
         printf("=%d+%d",b,d);
    }
    return 0;

}