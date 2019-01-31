#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int n = 0;
    int i = 0;
    for( i = 0; i < 8; i++ ){
        scanf( "%d", &n );
        sum += n;
    }
    printf( "%d\n",sum );

    sum = 0;
    for( i = 0; i < 8; i++ ){
        scanf( "%d,", &n );
        sum += n;
    }
    printf( "%d",sum );

    return 0;
}
