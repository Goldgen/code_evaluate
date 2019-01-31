#include <stdio.h>

int main()
{
    int a, b;
    scanf( "%d %d", &a, &b );
    int r = a % b;
    while( r != 0 )
    {
        a = b;
        b = r;
        r = a % b;
    }
    printf("最大公约数是: %d", b );
    return 0;
}