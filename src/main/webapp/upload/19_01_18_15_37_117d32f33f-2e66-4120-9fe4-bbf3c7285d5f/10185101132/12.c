#include <stdio.h>
#include <stdlib.h>

int main()
{

    char type;
    double a = 0.0, b = 0.0;
    double rst = 0.0;
    scanf( "%lf%c%lf", &a, &type, &b );//get operands and operator
    switch ( type ){
        case '+' : rst = a + b; break;
        case '-' : rst = a - b; break;
        case '*' : rst = a * b; break;
        default  : rst = a / b; break;// /???default?
    }
    printf( "%.3lf", rst );
    
    return 0;
}
