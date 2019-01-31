#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    for(y=0;y<10;++y)
    {
        x=10*y+6;
        if(x%3==0&&x!=96)
            printf("%d ",x);
        else if(x==96)
            printf("96");
        else
            continue;
    }
    return 0;
}
