#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;
    scanf( "%lf %lf", &a, &b );

    double c;

    if( a >= b )
        c = sqrt( a - b );
    if( a < b )
        c = sqrt( b - a );
    printf( "%.8lf %.8lf %.3lf", a, b, c );
    return 0;
}
