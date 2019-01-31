#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int sumj = 0,sumo = 0;
    for (i = 1;i <= 100;i++){
        if (i%2 == 0)
            sumo += i;
        else
            sumj += i;
    }
    printf("%d %d",sumj,sumo);
    return 0;
}

