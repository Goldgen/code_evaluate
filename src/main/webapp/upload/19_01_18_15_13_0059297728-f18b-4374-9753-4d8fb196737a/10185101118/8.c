#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)printf("%d",a);
    else
    {
        if(a==c||c==b)printf("%d",c);
        else
        {
            d=(a<b)?a:b;
            e=(a<c)?a:c;
            if(d!=e)d=(d>e)?d:e;
            else d=(c<b)?c:b;
            printf("%d",d);
        }
    }
    return 0;
}
