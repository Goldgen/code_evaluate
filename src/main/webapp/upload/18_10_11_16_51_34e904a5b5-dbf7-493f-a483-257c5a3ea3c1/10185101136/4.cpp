#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;

    scanf("%lf%lf", &a, &b);
    if (b >= a)
        printf("%.8lf %.8lf %.3lf", a, b, sqrt(b - a));
    else
        printf("%.8lf %.8lf %.3lf", a, b, sqrt(a - b));
    return 0;

}
