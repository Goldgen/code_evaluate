#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long number = 100;
    int a,b,c;
    long long e;
    do
    {
        a = number/100;
        b = (number-100*a)/10; 
        c = number%10;
        e = pow(a,3) + pow(b,3)+ pow(c,3);
        if(number == e && a ==1)
          printf("%lld",number);
		else if(number == e )
			 printf(" %lld",number);
        number++;
    }while(number < 1000);
    return 0;
}