#include <stdio.h>
#include <math.h>
double data[11][5];

int main(void){
    int i,j;
    for (i = 0;i < 11;i++)
        data[i][0] = 2.0 + 0.1*i;
    for (i = 0;i < 11;i++)
        for (j = 1;j < 5;j++){
            if (j == 1)
                data[i][j] = pow(data[i][0],-1);
            else
                data[i][j] = pow(data[i][0],j);
        }
    for (i = 0;i < 11;i++){
        for (j = 0;j < 5;j++){
            printf("%.4lf",data[i][j]);
            if (j != 4)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}