#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf( "%d", &num );
    printf( "%d %d", num % 10, num / 10 );
    return 0;
}
