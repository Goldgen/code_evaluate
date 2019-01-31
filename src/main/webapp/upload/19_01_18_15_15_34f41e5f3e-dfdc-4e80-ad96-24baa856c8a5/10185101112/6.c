#include <stdio.h>

int main()
{
    int x,y,t,a;
    scanf("%d %d",&x,&y);
    if (x<y)
    {
        t=y;
        y=x;
        x=t;
    }
    while (y!=0)
    {
        a=x%y;
        x=y;
        y=a;
    }
    printf("最大公约数是: %d",x);
}

