#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long n;
    int m;
    scanf( "%llu %d", &n, &m );

    unsigned long long tempn = n;
    int cnt = 1;
    tempn /= 10;
    while( tempn > 0 )
    {
        cnt++;
        tempn /= 10;
    }
    printf( "%d ", cnt );

    unsigned long long last;
    m %= cnt;
    for( ; m > 0; m-- )
    {
        last = n % 10;
        n /= 10;
        n += last * pow( 10, cnt-1 );
    }
    printf( "%llu", n );

    return 0;
}
