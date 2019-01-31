#include<stdio.h>
int main(void)
{
    int x=0;
    int y=0;
    scanf("%d",&x);
    if(x<0)
    {
        y=-1;
        printf("%d",y);
    }
    else if(x==0)
    {
        y=0;
        printf("%d",y);
    }
    else
    {
        y=1;
        printf("%d",y);
    }
    return 0;

}
