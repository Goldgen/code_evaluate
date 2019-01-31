#include <stdio.h>
int turn(void)
{
    int b;
    scanf(" %d",&b);
    if(b<=0)
    return 0;
    turn();
    printf("%d ",b);
}
void main()
{
    int x;
    scanf("%d",&x);
    turn();
    printf("%d",x);
}
