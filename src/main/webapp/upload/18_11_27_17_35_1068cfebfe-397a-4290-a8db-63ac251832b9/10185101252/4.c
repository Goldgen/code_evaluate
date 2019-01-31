#include <stdio.h>
double data[11][5];
int main(){

    for(int i = 0; i < 11; i++)
        data[i][0] = 2+0.1*i;
    for(int i = 0; i < 11; i++){
        printf("%.4f %.4f %.4f %.4f %.4f\n",
               data[i][0], 1/data[i][0], data[i][0]*data[i][0],
               data[i][0]*data[i][0]*data[i][0],
               data[i][0]*data[i][0]*data[i][0]*data[i][0]);
    }

    return 0;
}
