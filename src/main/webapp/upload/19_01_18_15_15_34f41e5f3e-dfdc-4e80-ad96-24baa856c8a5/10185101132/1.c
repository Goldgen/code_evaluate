#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int cck = 7;
    const int hen = 5;
    const int chi3 = 1;

    int i, j, k;
    for( i = 1; i <= 13 ; i++ )// ( 100 - 5 - 1 ) / 7 = 13.***
    {
        for( j = 1; j <= 18; j++ )// ( 100 - 7 - 1 ) / 5 = 18.***
        {
            for( k = 1; k <= 99; k++ )
            {
                if( cck * i + hen * j + chi3 * k == 100 && i + j + 3 * k == 100 )
                {
                    printf( "%d %d %d", i, j, k*3 );

                }

            }
        }
    }

    return 0;
}
