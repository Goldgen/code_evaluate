#include <stdio.h>
#include <math.h>

int main()
{
    double data[11][5];
    data[0][0]=2.0;

    for (int i = 0; i < 11; i++)
    {
        data[i+1][0] =data[i][0] + 0.1;
    }

    for (int i = 0; i < 11; i++)
    {
        data[i][1] = 1 / data[i][0];
        for (int j = 2; j < 5; j++)
        {
            data[i][j] = pow(data[i][0], j);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.4lf ", data[i][j]);
        }
    printf("%.4lf", data[i][4]);
        printf("\n");

    }
    for(int i = 10,j = 0;j < 4;j++)
    {
        printf("%.4lf ", data[i][j]);
    }
    printf("%.4lf", data[10][4]);

}