#include <stdio.h>
#include <math.h>

int isLeapYear( int y );
int SumDays( int y, int m, int d );

int main()
{
    int y1, m1, d1;
    int y2, m2, d2;
    scanf( "%d %d %d", &y1, &m1, &d1 );
    scanf( "%d %d %d", &y2, &m2, &d2 );
    int diff = abs( SumDays( y1, m1, d1 ) - SumDays( y2, m2, d2 ) );
//    printf( "%d\n%d\n\n", SumDays( y1, m1, d1 ), SumDays( y2, m2, d2 ) );
    printf( "采集时间为%d天", diff );

    return 0;
}

int isLeapYear( int y )
{
    int flag = 0;
    if( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 )
    {
        flag = 1;
    }
//    printf( "isLeapYear( %d ) == %d\n", y, flag );
    return flag;
}

int SumDays( int y, int m, int d )
{
    int Sum = 0;
    Sum += d;

    int MonthLen[13] = { -1, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, };
    int MonthLenLY[13] = { -1, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, };
	// Month Length Of Leap Year

    if( isLeapYear( y ) )
        Sum += MonthLenLY[ m ];
    else
        Sum += MonthLen[ m ];

    int diffY = y - 1;
    Sum += diffY * 365;
	Sum += (int)( floor( diffY / 4.0 ) );
	Sum -= (int)( floor( diffY / 100.0 ) );
	Sum += (int)( floor( diffY / 400.0 ) ) ;

    return Sum;
}
