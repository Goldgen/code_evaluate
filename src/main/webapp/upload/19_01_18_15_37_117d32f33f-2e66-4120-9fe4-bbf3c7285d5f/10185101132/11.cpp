#include <stdio.h>

int main(){
	char c;
	scanf( "%c", &c );
	if( c >= 'a' && c <= 'z' ){
		switch( c ){
				case( 'a' ) : case( 'e' ) : case( 'i' ) : case( 'o' ) : case( 'u' ) :
					printf( "vowel" );break;
				default : printf( "consonant" );break;
		}
	}else{
		printf( "ERROR" );
	}
	return 0;
}