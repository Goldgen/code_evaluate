#include <stdio.h>

int main()
{
    int n;
    scanf( "%d", &n );
    char c = 'A';
    int i, j;
    for( i = 0; i < ( 2 * n - 1 ) ; i++ )
    {
        for( j = 0; j < abs( n - 1 - i ); j++ )
        {
            printf( " " );
        }
        for( j = 0; j < 2 * ( n - abs( n - 1 - i ) ) - 1; j++ )
        {
            printf( "%c", c );
        }
        c++;
        if( i != 2 * n - 2 )
        {
            printf( "\n" );
        }
    }
    return 0;
}
