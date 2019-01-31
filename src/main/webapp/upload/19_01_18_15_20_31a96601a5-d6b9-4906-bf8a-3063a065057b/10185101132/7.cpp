#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max;
    int a, b, c, d;

    scanf( "%d %d %d %d", &a, &b, &c, &d );
    max = ( a > b ) ? a : b;
    max = ( max > c ) ? max : c;
    max = ( max > d ) ? max : d;
    printf( "%d", max );

    return 0;
}
