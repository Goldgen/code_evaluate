#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,i=0;

    scanf("%lld+%lld=%lld",&a,&b,&c);

    if((c-b)%10==0)
        {
            d=(c-b)/a;
            for(i=0;d>1;i++)
                {d=d/10;}
            printf("%lld",i);
        }
    else
    {
        d=(c-a)/b;
        for(i=0;d>1;i++)
                {d=d/10;}
        printf("-%lld",i);

    }
}
