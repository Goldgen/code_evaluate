#include <stdio.h>

int main()
{
    float high = 100.000f;
    int times = 1;
    float spatium = 0.000f;

    while(times <= 10)
       {
        spatium = spatium + high*3/2;
        high = high/2.000;
        times = times + 1;
       }
    spatium = spatium - high;

    printf("%.3f %.3f", spatium, high);
    return 0;
}

