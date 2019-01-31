#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max = 0.0, min = 100.0;
    float n = 0.0;
    scanf( "%f", &n );
    while( n != -1 )
    {
        max = ( n > max ) ? n : max;
        min = ( n < min ) ? n : min;
        scanf( "%f", &n );
    }
    printf( "最高成绩是: %.2f, 最低成绩是: %.2f", max, min );
    return 0;
}
