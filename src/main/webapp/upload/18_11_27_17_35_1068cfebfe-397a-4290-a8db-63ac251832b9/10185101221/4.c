#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5];
    data[0][0]=2.0;
    data[0][1]=0.5;
    data[0][2]=4.0;
    data[0][3]=8.0;
    data[0][4]=16.0;
    for(int i=1;i<11;i++)
    {
        data[i][0]=data[i-1][0]+0.1;
        data[i][1]=1.0/data[i][0];
        data[i][2]=data[i][0]*data[i][0];
        for(int j=3;j<5;j++)
             data[i][j]=data[i][j-1]*data[i][0];
    }
    for(int a=0;a<11;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==4)
            printf("%.4lf",data[a][b]);
            else
                printf("%.4lf ",data[a][b]);
        }
        if(a<10)
            printf("\n");
    }
    return 0;
}
