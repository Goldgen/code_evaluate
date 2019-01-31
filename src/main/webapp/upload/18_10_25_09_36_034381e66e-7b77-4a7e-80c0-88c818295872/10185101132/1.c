#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int time = 10;
    double sumH = 0.0;
    double currentH = 100.0;
    int i;

    for( i = 0; i < time; i++ ){
        sumH += currentH;
        currentH *= 0.5;
        sumH += currentH;
    }
	sumH -= currentH;
    printf( "%.3f %.3f", sumH, currentH );
    return 0;
}
