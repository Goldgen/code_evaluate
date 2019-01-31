#include <stdio.h>
int GDB(int a,int b)
{
    if(a%b==0)
        printf("%d",b);
    else
        GDB(b,a%b);
}

void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==0||y==0)
    printf("%d",x+y);
    if(x>=y)
    GDB(x,y);
    else
    GDB(y,x);
}
