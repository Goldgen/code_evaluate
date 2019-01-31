#include <stdio.h>

int main()
{
    double data[11][5];
    int i,j;
    data[0][0]=2.0;
    for(i=0;i<11;i++)
    {
        data[i][0]=data[0][0]+i*0.1;
        data[i][1]=1/data[i][0];
        data[i][2]=data[i][0]*data[i][0];
        data[i][3]=data[i][0]*data[i][2];
        data[i][4]=data[i][0]*data[i][3];
    }
    for(i=0;i<11;i++)
    {
        printf("%.4lf",data[i][0]);
        for(j=1;j<5;j++)
            printf(" %.4lf",data[i][j]);
        if(i<10)
            printf("\n");
    }
    return 0;
}
