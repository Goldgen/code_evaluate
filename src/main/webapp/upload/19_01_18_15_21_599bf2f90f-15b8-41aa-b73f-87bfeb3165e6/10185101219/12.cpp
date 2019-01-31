#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    double a;
	double b; 
	double d;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c)
{
case '+':
    d=a+b;
    printf("%.3lf",d);
    break;
case '-':
    d=a-b;
    printf("%.3lf",d);
    break;
case '*':
    d=a*b;
    printf("%.3lf",d);
    break;
case '/':
    d=a/b;
    printf("%.3lf",d);
    break;
		default:
			printf("nmsl");
			break;
}


    return 0;
}
