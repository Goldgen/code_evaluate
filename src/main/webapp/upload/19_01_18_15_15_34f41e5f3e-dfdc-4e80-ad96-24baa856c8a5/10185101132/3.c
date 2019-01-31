#include <stdio.h>

int isPrime( int );//only examine the odd number

int main()
{
    int n;
    scanf( "%d", &n );
    printf( "%d", n );
    int a;
    for( a = 3; a <= n / 2; a += 2 )
    {
        if( ( n - a ) % 2 && isPrime( a ) && isPrime( n - a ) )
        {
                printf(  "=%d+%d", a, n - a );
        }
    }
    return 0;
}


int isPrime( int m )//only examine the odd number
{
    int flag = 1;
    int i;
    for( i = 3; i < m; i += 2 )
    {
        if( m % i == 0 )
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
