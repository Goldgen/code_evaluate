#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5];
    double value=2.0;
    for(int i=0;i<11;i++)
    {
        data[i][0]=value;
        data[i][1]=1/value;
        data[i][2]=value*value;
        data[i][3]=value*value*value;
        data[i][4]=value*value*value*value;
        value+=0.1;
        printf("%.4lf %.4lf %.4lf ",data[i][0],data[i][1],data[i][2]);
        printf("%.4lf %.4lf",data[i][3],data[i][4]);
        if(i!=10)
            printf("\n");
    }
    return 0;
}
