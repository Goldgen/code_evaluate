#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    scanf( "%d", &c );
    int i, j;
    for( i = 1; i <= c; i++ )
    {
        for( j = 0; j < 2 * ( c - i ); j++ )
        {
            printf( " " );
        }
        for( j = 1; j <= i; j++ )
        {
            printf( "%d", j );
            if( j < i )
                printf( "+" );
            else
                printf( "=" );
        }
        for( j = i; j >= 1; j-- )
        {
            printf( "%d", j );
            if( j != 1 )
                printf( "+" );
        }
        if( i != c )
            printf( "\n" );
    }
    return 0;
}
