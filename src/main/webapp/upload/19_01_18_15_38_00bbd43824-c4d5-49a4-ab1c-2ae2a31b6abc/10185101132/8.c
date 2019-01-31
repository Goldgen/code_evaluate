#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max;
    int mid;
    int a, b, c;

    scanf( "%d %d %d", &a, &b, &c );
    max = ( a >= b ) ? a : b;
    max = ( max >= c ) ? max : c;
    
    if( a == max )
        mid = ( b > c ) ? b : c;
    if( b == max )
        mid = ( a > c ) ? a : c;
    if( c == max )
        mid = ( a > b ) ? a : b;
    
    printf( "%d", mid );

    return 0;
}
