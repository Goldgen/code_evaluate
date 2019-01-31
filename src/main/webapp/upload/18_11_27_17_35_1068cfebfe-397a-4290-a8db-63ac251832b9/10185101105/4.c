#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5],j=2.0f;
    int i,x,y;
    for(i=0;i<11;i++)
    {
        data[i][0]=j+0.1*i;
        data[i][1]=1.0/data[i][0];
        data[i][2]=data[i][0]*data[i][0];
        data[i][3]=data[i][0]*data[i][2];
        data[i][4]=data[i][0]*data[i][3];
    }
    for(x=0;x<11;x++)
    {
        for(y=0;y<5;y++)
        {
            if(y!=4)
                printf("%.4lf ",data[x][y]);
            else
                printf("%.4lf",data[x][y]);
        }
        if(x!=10)
            printf("\n");
    }
    return 0;
}
