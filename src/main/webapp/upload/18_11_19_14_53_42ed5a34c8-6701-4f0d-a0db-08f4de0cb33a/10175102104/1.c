#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,list[100],i,m;
    double average;
    while(1)
    {
        scanf("%d",&list[x]);
        if(list[x]==-1)
        {
			x--;
            break;
        }
        else
        {
            m=0;average=0;
            for(i=1;i<=x;i++)
            {
                m=m+list[i];
            }
            average=m/x;
            printf("%.2f\n",average);
        }
        x++;
    }
    return 0;
}