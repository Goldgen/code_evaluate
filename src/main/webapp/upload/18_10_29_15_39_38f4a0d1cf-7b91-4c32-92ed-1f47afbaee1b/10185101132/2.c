#include <stdio.h>

int fac( int );

int main()
{
    double e;
    int i;
    for( i = 0; i <= 10; i++ )// 9! = 382,880 10! = 3,628,800
    {
        e += 1.0 / fac( i );
    }
    printf( "%.6lf", e );
    return 0;
}


int fac( int n )
{
    int pro = 1;
    if( n != 0 )
    {
        for( ; n > 1; n-- )
        {
            pro *= n;
        }
    }

    return pro;
}
