#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a,b,c=0,d;
    scanf("%d %d",&a,&b);
    if(a>=b)
        {c=a%b;
        d=b;
        while(c!=0)
            {d=c;
            c=b%c;
            b=d;}
        printf("最大公约数是: %u",d);}
    else
        {c=b%a;
        d=a;
        while(c!=0)
            {d=c;
            c=a%c;
            a=d;}
        printf("最大公约数是: %u",d);}
    return 0;
}