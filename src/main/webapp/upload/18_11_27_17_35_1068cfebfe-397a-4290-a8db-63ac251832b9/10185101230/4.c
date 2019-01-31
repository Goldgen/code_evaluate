#include <stdio.h>
#include <math.h>

int main()
{
    double data[11][5] = {0.0};
    for (int i=0; i<11; i++)
    {
        data[i][0] = (2 + 0.1 * i);
    }
    for (int i = 0; i < 11; i++)
    {
        data[i][1] = 1 / data[i][0];
        for (int j = 2; j < 5; j++)
        {
            data[i][j] = pow(data[i][0], j);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("  %2d   ", i + 1);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.4lf ", data[i][j]);
        }
      if(i<10)  printf("\n");
    }
    return 0;
}

