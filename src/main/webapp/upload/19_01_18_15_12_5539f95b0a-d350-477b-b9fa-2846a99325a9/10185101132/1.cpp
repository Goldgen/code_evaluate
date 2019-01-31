#include <stdio.h>

int main(){
	int a, b;
	int big;
	scanf( "%d %d", &a, &b );
	
	big = ( a > b ) ? a : b;
	
	printf( "%d", big );
	
	return 0;
}