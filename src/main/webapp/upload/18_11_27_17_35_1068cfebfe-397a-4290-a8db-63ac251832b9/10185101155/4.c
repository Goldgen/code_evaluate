#include <stdio.h>
int main()
{
    double data[11][5];
    double a = 2.0;
    for(int x=0;x<11;x++)
    {
        data[x][0]=a;
        a+=0.1;
    }
    for(int x=0;x<11;x++)
    {
        data[x][1]=1.0/data[x][0];
        data[x][2]=data[x][0]*data[x][0];
        data[x][3]=data[x][0]*data[x][0]*data[x][0];
        data[x][4]=data[x][0]*data[x][0]*data[x][0]*data[x][0];
    }
    for(int i=0;i<11;i++)
        for(int j=0;j<5;j++)
    {
        printf("%.4lf",data[i][j]);
        if(j<4)
            printf(" ");
        if(j==4)
            printf("\n");
    }
    return 0;
}