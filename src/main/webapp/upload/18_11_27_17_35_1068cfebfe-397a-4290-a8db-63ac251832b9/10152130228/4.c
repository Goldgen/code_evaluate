#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float data[11][5];
    for(int i=0; i<11; i++){
        data[i][0] = 2.0+0.1*i;
        data[i][1] = 1/data[i][0];
        for(int j=2; j<5; j++)
            data[i][j] = pow(data[i][0], j);
    }
    for(int i=0; i<10; i++){
        for(int k=0; k<4; k++)
            printf("%.4f ", data[i][k]);
        printf("%.4f\n", data[i][4]);
    }
    for(int k=0; k<4; k++)
        printf("%.4f ", data[10][k]);
    printf("%.4f", data[10][4]);
    return 0;
}
