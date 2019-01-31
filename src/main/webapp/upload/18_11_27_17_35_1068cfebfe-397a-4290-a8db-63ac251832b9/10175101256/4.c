#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
    double data[11][5];
    double t=2.0;
    for(int i=0;i<11;i++){
        data[i][0]=t;
        t+=0.1;
    }
    for(int j=1;j<5;j++){
        for(int k=0;k<11;k++){
            if(1==j)
            data[k][j]=1/data[k][0];
            else
				data[k][j]=pow(data[k][0],j);
            }
        }
    for(int i=0;i<11;i++){
        for(int j=0;j<5;j++){
            if(j)
            printf(" ");
            printf("%.4f",data[i][j]);
        }
        printf("\n");
    }
}