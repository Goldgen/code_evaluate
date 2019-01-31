#include <stdio.h>

int main()
{
    int i;
    double data[11][5];

    for(i=0; i<11; i++)
    {
        data[i][1] = 2.0+i*0.1;
        printf("%.4lf ", data[i][1]);
        printf("%.4lf ", 1/data[i][1]);
        printf("%.4lf ", data[i][1]*data[i][1]);
        printf("%.4lf ", data[i][1]*data[i][1]*data[i][1]);
        printf("%.4lf\n", data[i][1]*data[i][1]*data[i][1]*data[i][1]);
    }
}
