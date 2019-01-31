#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float data[11][5]={0.0};
    for(int i=0;i<11;i++){
        data[i][0]=2.0+0.1*i;
    }
    for(int i=0;i<11;i++){
        for(int j=1;j<5;j++){
            if(j==1)
				data[i][j]=1.0/data[i][0];
            else
                data[i][j]=pow(data[i][0],j);
        }
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<5;j++){
            printf("%.4f",data[i][j]);
            if(j!=4)
                printf(" ");
        }
        if(i!=10)
            printf("\n");
    }
    return 0;
}