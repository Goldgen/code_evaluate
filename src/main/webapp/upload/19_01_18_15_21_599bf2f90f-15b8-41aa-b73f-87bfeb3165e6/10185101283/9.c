#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y = (x<0)?-1:(x>0?1:0);
    printf("%d",y);
    return 0;
}
