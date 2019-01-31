#include <stdio.h>

int main(){
	char c;
	int diff = 'a' - 'A';
	c = getchar();
	if( c >= 'A' && c <= 'Z' ){
		c += diff;
		printf( "%c", c );
	}else{
		printf( "ERROR" );
	}


	return 0;
}
