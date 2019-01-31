#include<stdio.h>
int main(void)
{
    int y;
    int x;
    scanf("%d",&x);
    if(x<0)
        y=-1;
    else if(x==0)
        y=0;
    else if(x>0)
        y=1;
    printf("%d",y);
    return 0;
}
