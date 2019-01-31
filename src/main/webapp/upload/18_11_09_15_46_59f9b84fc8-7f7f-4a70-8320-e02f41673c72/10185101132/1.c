#include <stdio.h>

int main()
{
	int i;
	printf( "6" );
	for( i = 16; i <= 100; i += 10 )
	{
		if( !(i % 3) )
		{
			printf( " %d", i );
		}
	}
}