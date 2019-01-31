#include <stdio.h>

int main()
{
    double data[11][5];

    int i;
    double k;
    for(i = 0, k = 2.0; i < 11; i++, k += 0.1){
        data[i][0] = k;
        data[i][1] = 1 / k;
        data[i][2] = k * k;
        data[i][3] = k * k * k;
        data[i][4] = k * k * k * k;
    }

    int j;
    for(i = 0; i < 11; i++){
        for(j = 0; j < 5; j++){
            if(j && j < 4){
                printf(" %.4lf", data[i][j]);
            }else if(j == 0){
                printf("%.4lf", data[i][j]);
            }else{
                printf(" %.4lf\n", data[i][j]);
            }
        }
    }

    return 0;
}
