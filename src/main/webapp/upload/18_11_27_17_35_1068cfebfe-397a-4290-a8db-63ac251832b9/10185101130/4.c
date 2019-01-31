#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 0,n = 0;
    double data[11][5];
    for(i = 0; i <= 10; i++)
    {
        for(n = 0; n <= 4; n++)
        {
            if(n == 0)
                printf("%.4f ",2.0+0.1*i);
            else if(n == 1)
                printf("%.4f ",1/(2.0+0.1*i));
            else if(n == 2 || n == 3)
                printf("%.4f ",pow((2.0+0.1*i),n));
            else
                printf("%.4f",pow((2.0+0.1*i),n));
        }
        printf("\n");
    }

    return 0;
}
