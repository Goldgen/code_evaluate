#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5];

    for (int i = 0; i < 11; i++){
        data[i][0] = 2.0 + i * 0.1;
        double x = data[i][0];
        data[i][1] = 1 / x;
        data[i][2] = x * x;
        data[i][3] = data[i][2] * x;
        data[i][4] = data[i][3] * x;
    }
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 5; j++){
            if (j != 0)
                printf(" ");
            printf("%.4lf", data[i][j]);
        }
        printf("\n");
    }
    return 0;
}
