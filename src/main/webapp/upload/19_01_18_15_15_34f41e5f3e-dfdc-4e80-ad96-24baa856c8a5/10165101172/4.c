
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    double n;
    double max = 0,min = INT_MAX;
    while (scanf("%lf",&n) && n >= 0){
        if (max < n)
            max = n;
        if (min > n)
            min = n;
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}

