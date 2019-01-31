#include <stdio.h>

int main(){
	float sum = 0;
	int cnt = 0;
	int temp = 0;
	float avr = 0;
//    const int diff = '0';
	for( cnt = 0; cnt < 5; cnt++ ){
//		temp = getchar() - diff;
        scanf( "%d", &temp );
		sum += (float)temp;
	}
	avr = sum / cnt;
	printf( "%.1f", avr );

	return 0;
}
