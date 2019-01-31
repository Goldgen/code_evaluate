#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int flag = 0;
    while( ( c = getchar() ) != EOF )
    {
        switch( c )
        {
        case 'a': case 'e': case 'i':
        case 'o': case 'u': case 'A':
        case 'E': case 'I': case 'O':
        case 'U':
            flag = 1;
            break;
        default :
            break;
        }
        if( flag )
        {
            printf( "yes" );
            break;
        }
    }
    if( !flag )
    {
        printf( "no" );
    }
    return 0;
}
