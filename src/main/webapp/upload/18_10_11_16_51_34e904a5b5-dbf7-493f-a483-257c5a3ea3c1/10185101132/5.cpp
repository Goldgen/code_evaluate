#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    long long a = 10;
    for( i = a - 1 ; i > 0; i-- ){
        a *= i;
    }
    printf( "%lld\n", a );

    a = 20;
    for( i = a - 1 ; i > 0; i-- ){
        a *= i;
    }
    printf( "%lld", a );

    return 0;
}
