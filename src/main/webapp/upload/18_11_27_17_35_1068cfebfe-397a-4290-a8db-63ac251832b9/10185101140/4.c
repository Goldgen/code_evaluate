#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[11][5] = {0.0};
    int i = 0, j = 0;
    for (i=0; i<11; i++) {
        data[i][0] = 2.0 + (double)i/10;
        data[i][1] = 1/data[i][0];
        data[i][2] = data[i][0] * data[i][0];
        data[i][3] = data[i][2] * data[i][0];
        data[i][4] = data[i][3] * data[i][0];
    }
    for (i=0; i<11; i++) {
        for (j=0; j<5; j++) {
            printf("%.4lf",data[i][j]);
            if (j<4) printf(" ");
        }
        if (i<10) printf("\n");
    }
    return 0;
}
