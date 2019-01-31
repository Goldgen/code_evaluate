#include <stdio.h>

int main()
{
    double a, tot;
    for (int i = 1; i <= 5; ++i){
        scanf("%lf", &a);
        tot += a;
    }
    printf("%.1lf", tot / 5.0);
    return 0;
}
