#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,c,d,i;
    scanf("%d+%d=%d",&a,&b,&c);
    d=a+b;
    if(c==d)
    {
        printf("0");
    }
    else
    {
        int m=a,n=b;
        for(i=1;i<=100;i++)
        {
            m=m*10;
            if((m+n)==c)
            {
                printf("%d",i);
            }
        }
        m=a;
        for(i=1;i<=100;i++)
        {
            n=n*10;
            if((m+n)==c)
            {
                printf("-%d",i);
            }
        }
    }
    return 0;
}
