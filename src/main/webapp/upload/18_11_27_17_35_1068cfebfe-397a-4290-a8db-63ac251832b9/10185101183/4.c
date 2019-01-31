#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5];
    data[0][0]=2.0;
    for(int i=1;i<11;++i)
        data[i][0]=data[i-1][0]+0.1;
    for(int i=0;i<11;++i)
    {
       data[i][1]=1/data[i][0];
       data[i][2]=data[i][0]*data[i][0];
       data[i][3]=data[i][0]*data[i][0]*data[i][0];
       data[i][4]=data[i][0]*data[i][0]*data[i][0]*data[i][0];
    }
    for(int i=0;i<11;++i)
    {
        for(int j=0;j<4;++j)
            printf("%.4lf ",data[i][j]);
        printf("%.4lf\n",data[i][4]);
    }
}
