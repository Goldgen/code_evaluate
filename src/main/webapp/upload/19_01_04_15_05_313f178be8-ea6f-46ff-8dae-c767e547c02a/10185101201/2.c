#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a,b,c,t,r=0;
    char plus,is;
    scanf("%d%c%d%c%d",&a,&plus,&b,&is,&c);
    if((c-b)%a==0)
    {
        t=(c-b)/a;
        while(t>1)
        {
            t=t/10;
            r++;
        }
        printf("%lld",r);
    }
    else if((c-a)%b==0)
    {
        t=(c-a)/b;
        while(t>1)
        {
            t=t/10;
            r++;
        }
        printf("-%lld",r);
    }
}
