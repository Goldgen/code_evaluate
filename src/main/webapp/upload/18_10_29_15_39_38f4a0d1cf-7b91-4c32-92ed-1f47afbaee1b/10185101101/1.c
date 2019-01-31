#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xy[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int xx,xiao,i,j,money,mon=0;
    xx=0;xiao=0;
    for(i=0;i<=13;++i)
    {
        money=300-21*xy[i];
        mon=money;
        for(j=1;j<money/15;++j)
        {

            mon-=15;
            xiao=mon;
            if(xy[i]+j+xiao==100)
                printf("%d %d %d",xy[i],j,xiao);


        }
    }

    return 0;
}
