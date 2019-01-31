#include <stdio.h>
#include <stdlib.h>
int ZHISHU(int r)
{
int t=sqrt(r+0.5) ;
    for(int i=2; i<=t; i++)
        if(r%i==0)
            return 0;
    return 1;
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",x);
    int a=2,b;

    for(a=2;a<(x/2+1);++a)
        {b=x-a;
       if((ZHISHU(a)+ZHISHU(b))==2&&b!=1)
        printf("=%d+%d",a,b);
        }



    return 0;
}

