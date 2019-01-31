#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Alice = 0;
    char Bob = 0;
    scanf( "%c %c", &Alice, &Bob );
    if( Alice == Bob )
        printf( "Tie" );
    else
    {
        switch( Alice )
        {
        case 'S':
            if( Bob == 'C' )
                printf( "Alice" );
            else
                printf( "Bob" );
            break;
        case 'R':
            if( Bob == 'C' )
                printf( "Bob" );
            else
                printf( "Alice" );
            break;
        //case 'C'
        default:
            if( Bob == 'R' )
                printf( "Alice" );
            else
                printf( "Bob" );
            break;
        }
    }
    return 0;
}
