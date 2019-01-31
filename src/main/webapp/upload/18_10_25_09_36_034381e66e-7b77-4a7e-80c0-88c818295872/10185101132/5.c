#include <stdio.h>

int isRunNian( int );

int main(){

	int yr, mon;
	scanf( "%d %d", &yr, &mon );
	if( isRunNian( yr ) )
		printf( "闰年" );
	else
		printf( "不是闰年" );

	if( mon <= 2 || mon == 12 ){
		printf( " 冬季" );
	}else if( mon >= 3 && mon <= 5 ){
		printf( " 春季" );
	}else if( mon >= 6 && mon <= 8 ){
		printf( " 夏季" );
	}else{
		printf( " 秋季" );
	}

	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if( isRunNian( yr ) )
		day[1] = 29;
	printf( " %d", day[mon - 1] );
	return 0;
}

int isRunNian( int yr ){
	int isRunNian = 0;
	if( yr % 400 == 0 ){
		isRunNian = 1;
	}else if( yr % 100 == 0 ){
		;
	}else if( yr % 4 == 0 ){
		isRunNian = 1;
	}
	
	return isRunNian;
}
