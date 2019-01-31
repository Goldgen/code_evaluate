#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,t=0;
    scanf("%d+%d=%d",&a,&b,&c);
    if((a+b)==c)
    {
        printf("0");
        return 0;
    }
    if((b%10)==(c%10))
    {
        while((b+a)!=c)
        {
            a*=10;
            ++t;
        }
        printf("%d",t);
        return 0;
    }
    if((a%10)==(c%10))
    {
        while((b+a)!=c)
        {
            b*=10;
            ++t;
        }
        printf("%d",-t);
        return 0;
    }
    return 0;
}
