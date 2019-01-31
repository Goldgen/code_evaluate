#include <stdio.h>

int main(){
	int n;
	scanf( "%d", &n );
	int i, j;
	for( i = 0; i < n; i++ ){
		for( j = 0; j <= i; j++ ){
			if( j == i ){
				printf( "*" );
			}else if( j == 0 ){
				printf( "*" );
			}else if( i == n - 1 ){
				printf( "*" );
			}else{
				printf( " " );
			}
		}
        if( i != n -1 )
            printf( "\n" );
	}
	return 0;
}
