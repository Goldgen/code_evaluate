#include <stdio.h>

int main()
{
    double h = 100.0, tot = 100.0;

    for (int i = 1; i < 10; ++i){
        h *= 0.5;
        tot += 2 * h;
    }
    printf("%.3lf %.3lf", tot, 0.5 * h);
    return 0;
}
