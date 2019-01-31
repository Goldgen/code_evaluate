#include <stdio.h>

int main()
{
    int n;
    scanf( "%d", &n );
    int i, j;
    i = j = 0;

    float a = 1;
    for( i = 0; i < n; i++ )
    {
        a = 1;
        for( j = 0; j < i + 1; j++ )
        {
            printf( "%d", (int)a );
            a *= 1.0 * ( i - j ) / ( j + 1 );
            if( j != i )
                printf( " " );
        }
        if( i != n - 1 )
            printf( "\n" );
    }


    return 0;
}
