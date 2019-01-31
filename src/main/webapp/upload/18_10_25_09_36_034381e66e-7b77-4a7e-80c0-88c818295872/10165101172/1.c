#include <stdio.h>

int main(void)
{
    int i;
    double start = 100.0;
    double distance = 0;
    for (i = 1;i <= 10;i++){
        distance += start;
        start /= 2;
    }
    printf("%.3lf %.3lf",2*distance - 100,start);
    return 0;
}
