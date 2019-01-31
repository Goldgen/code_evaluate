#include <stdio.h>

int main()
{
    double data[11][5];
    int i,j;
    for(i=0;i<11;i++){
        data[i][0]=2.0+0.1*i;
        data[i][1]=1.0/data[i][0];
        data[i][2]=data[i][0]*data[i][0];
        data[i][3]=data[i][2]*data[i][0];
        data[i][4]=data[i][3]*data[i][0];
        for(j=0;j<4;j++)
            printf("%.4lf ",data[i][j]);
        printf("%.4lf",data[i][j]);
        printf("\n");
    }
    return 0;
}
