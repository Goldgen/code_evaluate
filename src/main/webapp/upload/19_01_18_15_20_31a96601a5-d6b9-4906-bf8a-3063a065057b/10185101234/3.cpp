#include<stdio.h>
int main()
{
    unsigned x,p,n,y1,y2,y;
    scanf("%d%d%d",&x,&p,&n);
    y1 = (~x&((1<<(p+1))-1))&((~0)<<(p-n+1));
    y2 = ((~0)^((1<<(p+1))-1)^((1<<(p-n+1))-1))&x;
    y = y1 + y2;

    printf("%d",y);

    return 0;
}
