#include <stdio.h>

int main(){
	int n;
	scanf( "%d", &n );
	int n2 = n * n;
	int i;
	for( i = 1; i <= n2; i++ ){
		if( i % n == 1 ){
			printf( "*" );
		}else if( i == n2 ){
            printf( "*" );
		}else if( i % n == 0 ){
			printf( "*\n" );
		}else if( i <= n || i >= n2 - n + 1 ){
			printf( "*" );
		}else{
			printf( " " );
		}
	}
	return 0;
}
