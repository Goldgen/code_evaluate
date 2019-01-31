#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5]={{2.0},{2.1},{2.2},{2.3},{2.4},{2.5},{2.6},{2.7},{2.8},{2.9},{3.0}};
    int i,j;
    for(i=0;i<11;i++){
        data[i][1]=1.0/data[i][0];
        data[i][2]=data[i][0]*data[i][0];
        data[i][3]=data[i][0]*data[i][0]*data[i][0];
        data[i][4]=data[i][0]*data[i][0]*data[i][0]*data[i][0];
    }
    for(i=0;i<11;i++){
        for(j=0;j<5;j++){
        printf("%.4lf ",data[i][j]);
        if(j<4) printf(" ");}
        if(i<10) printf("\n");
    }
    return 0;
}
