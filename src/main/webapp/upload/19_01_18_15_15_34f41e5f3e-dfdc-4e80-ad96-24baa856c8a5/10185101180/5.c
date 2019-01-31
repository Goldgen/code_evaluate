#include <stdio.h>
int main()
{
    int i,x,y;
    for(i=1,x=0,y=0;i<=100;i++)
    {
        if(i%2==0)
            y=y+i;
        else
            x=x+i;
    }
    printf("%d %d",x,y);
    return 0;
}
