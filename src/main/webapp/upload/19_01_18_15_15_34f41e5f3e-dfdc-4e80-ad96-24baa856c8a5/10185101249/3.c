#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    printf("%d",a);
    if(a<=1000)
    {
        for(b=2;b<=a/2;b++)
        {
            c=a-b;
            for(d=2;d*d<=b;d++)
            {
                if(b%d==0)
                break;
            }
           for(e=2;e*e<=c;e++)
            {
                if(c%e==0)
                break;
            }
            if(d*d>b&&e*e>c)
                printf("=%d+%d",b,c);
        }
    }
    return 0;
}
