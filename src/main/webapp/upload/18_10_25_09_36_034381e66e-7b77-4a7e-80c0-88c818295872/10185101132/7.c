#include <stdio.h>

int main()
{
    int n;
    scanf( "%d", &n );
    int maxRow = ( n + 1 ) / 2;

    int i, j;
    //r[0]
    for( j =0; j < maxRow; j++ )
    {
        if( j == maxRow - 1 )
            putchar( '*' );
        else
            putchar( ' ' );
    }
    putchar( '\n' );
    //r[1]-r[n-2]
    for( i = 1; i < maxRow - 1; i++ )
    {
        for( j =0; j < maxRow + i; j++ )
        {
            if( j == maxRow - i - 1 || j == maxRow + i - 1 )
                putchar( '*' );
            else
                putchar( ' ' );
        }
        putchar( '\n' );
    }
    //r[n-1]
    for( j = 0; j < n; j++ )
    {
        putchar( '*' );
    }

    return 0;
}
