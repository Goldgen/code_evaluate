#include <stdio.h>

int main(){
	int n;
	scanf( "%u", &n );
	unsigned long long pro = 1;
	for( ; n > 1; n-- ){
		pro *= n;
	}
	printf( "%llu", pro );
	return 0;
}
