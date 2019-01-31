#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double d = 0, p = 0, r = 0;
    scanf( "%lf %lf %lf", &d, &p, &r );

    r /= 100;
    double m = 0;
    m = log( p / ( p - d * r ) ) / log( 1 + r );

    int intm = m + 0.5;

    printf( "%d", intm );


    return 0;
}